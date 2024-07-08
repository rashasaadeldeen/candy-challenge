using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnswerManagers : MonoBehaviour
{
    public bool _canDrag;
    public bool _isRight;
    public bool _canScale;
    public bool _canCheck;
    public bool _limitDrag = true;
    public bool _isSavePos;
    public float _minScale = 1f;
    public float _maxScale = 3f;

    [HideInInspector]
    public Vector2 _tempPos;

    [Header("Drag To Target")]
    public bool _isDragToTarget;
    public Vector2 _posTarget;
    private bool _isTouchUp;

    private void Start()
    {
        if (_isSavePos)
        {
            _tempPos = transform.position;
        }
    }

    private void Update()
    {
        if (!GameControllers.Instance._checkComplete && !GameControllers.Instance._checkDone)
        {
            if (GameControllers.Instance._curentObject != null && GameControllers.Instance._curentObject.name.Equals(gameObject.name))
            {
                if (Input.GetMouseButton(0))
                {
                    if (_isTouchUp)
                    {
                        _isTouchUp = false;
                    }
                    MouseDrag();
                }
                if (Input.GetMouseButtonUp(0))
                {
                    _isTouchUp = true;
                    MouseUp();
                    if (_isSavePos)
                    {
                        GameControllers.Instance.EffectCheck(false, Vector2.zero, true);
                        transform.position = _tempPos;
                    }
                }
                if (_isTouchUp && _isDragToTarget)
                {
                    if (Vector2.Distance(transform.position, _posTarget) < 2f)
                    {
                        transform.position = Vector2.Lerp(transform.position, _posTarget, .1f);
                    }
                }
            }
        }
    }

    public void MouseDrag()
    {
        if (_canDrag && !GameControllers.Instance._stopDrag)
        {
            GameControllers.Instance.DragObject(gameObject);
            if (_limitDrag)
            {
                LimitDrag(-2.5f, 2.5f, -5f, 4f);
            }
        }
        if (_canScale)
        {
            GameControllers.Instance.ScaleControl(gameObject, _minScale, _maxScale);
        }
    }

    public void MouseUp()
    {
        if (Input.touchCount < 2 && _canCheck)
        {
            GameControllers.Instance.TouchUp(_isRight, transform.position);
        }
    }

    private void LimitDrag( float minX, float maxX, float minY, float maxY)
    {
        if (transform.position.x < minX)
        {
            transform.position = new Vector2(minX, transform.position.y);
        }
        if (transform.position.x > maxX)
        {
            transform.position = new Vector2(maxX, transform.position.y);
        }
        if (transform.position.y < minY)
        {
            transform.position = new Vector2(transform.position.x, minY);
        }
        if (transform.position.y > maxY)
        {
            transform.position = new Vector2(transform.position.x, maxY);
        }
    }
}