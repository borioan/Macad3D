﻿using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class ExtrudeEditor : Editor<Extrude>
{
    TranslateAxisLiveAction _TranslateAction;
    LabelHudElement _HudElement;
    bool _IsMoving;
    double _StartDepth;

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        CreatePanel<ExtrudePropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }
    
    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStart()
    {
        Shape.ShapeChanged += _Shape_ShapeChanged;
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStop()
    {
        _HudElement = null;
        _TranslateAction = null;
        Shape.ShapeChanged -= _Shape_ShapeChanged;              
    }

    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            if (!_IsMoving)
            {
                StartTools();
            }
            else if (_TranslateAction != null && Entity.GetFinalExtrusionAxis(out Ax1 axis))
            {
                if (Entity.IsSketchBased && Math.Sign(_StartDepth) != Math.Sign(Entity.Depth))
                    axis.Reverse();
                _TranslateAction.Axis = axis.Transformed(Entity.Body.GetTransformation());
            }

            WorkspaceController.Invalidate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<ExtrudeEditor>();
    }

    //--------------------------------------------------------------------------------------------------

    #region Live Actions

    void _UpdateActions()
    {
        if (Entity?.Body == null)
            return;

        if (!Entity.GetFinalExtrusionAxis(out Ax1 axis))
            return;
        axis.Transform(Entity.Body.GetTransformation());

        if (_TranslateAction == null)
        {
            _TranslateAction = new()
            {
                Color = Colors.ActionBlue,
                Cursor = Cursors.SetHeight,
                NoResize = true,
                Length = 1.0,
            };
            _TranslateAction.Preview += _TranslateAction_Preview;
            _TranslateAction.Finished += _TranslateActionFinished;
        }
        _TranslateAction.Axis = axis;
        if (!_IsMoving)
        {
            _StartDepth = Entity.Depth;
        }

        StartAction(_TranslateAction);
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = true;

        double newDepth;
        if (Entity.IsSketchBased)
        {
            SetHintMessage("Scale extrusion depth using gizmo, press 'CTRL' to round to grid stepping, press 'SHIFT' to extrude symmetric to both sides.");

            bool shallSymmetric = args.MouseEventData.ModifierKeys.Has(ModifierKeys.Shift);
            if (shallSymmetric != Entity.Symmetric)
            {
                Entity.Symmetric = shallSymmetric;
                _StartDepth = shallSymmetric
                                  ? _StartDepth * 2
                                  : _StartDepth * 0.5;
            }
            newDepth = _StartDepth + args.Distance * (_StartDepth < 0 ? -1.0 : 1.0);
        }
        else
        {
            SetHintMessage("Scale extrusion depth using gizmo, press 'CTRL' to round to grid stepping.");
            newDepth = _StartDepth + args.Distance;
        }

        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newDepth = Maths.RoundToNearest(newDepth, WorkspaceController.Workspace.GridStep);
        }

        Entity.Depth = newDepth;

        _UpdateActions();
        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Depth: {Entity.Depth.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateActionFinished(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = false;
        CommitChanges();

        StartTools();
    }
    
    //--------------------------------------------------------------------------------------------------


    #endregion
}