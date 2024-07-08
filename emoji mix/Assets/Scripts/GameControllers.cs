using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class GameControllers : MonoBehaviour
{
    public Text txtKey;
    public static GameControllers Instance { get; set; }

    [HideInInspector]
    public bool _checkComplete;
    [HideInInspector]
    public Vector2 _tempPosMouse;
    private Vector2 _mOffset;

    public GameObject _effectTouch;
    public GameObject _effectRight;
    public GameObject _effectWrong;
    private bool _checkCanDrag;
    [HideInInspector]
    public bool _stopDrag, _checkDone;

    public GameObject[] _ArrLevel;
    public int _level;
    [HideInInspector]
    public GameObject _objectLevel;
    [HideInInspector]
    public GameObject _curentObject;
    [HideInInspector]
    public bool _checkFalse;

    [HideInInspector]
    public Vector3 delta = Vector3.zero;
    private Vector3 lastPos = Vector3.zero;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        Input.multiTouchEnabled = true;
        Application.targetFrameRate = 60;
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            EffectTouch();
            TouchDown();
        }
    }

    private void Start()
    {
     //   _level = PlayerPrefs.GetInt(KeySave.levelPlay, 0);
        InitLevel(_level);
 
     //   AdsManager.Instance.numLevelShow += 1;
    }

    public GameObject ChooseObject() // click select object
    {
        Vector2 clickPosition = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
        if (Input.touchCount > 1)
        {
            Touch touch = Input.GetTouch(Input.touchCount-1);
            clickPosition = new Vector2(touch.position.x, touch.position.y);
        }
        RaycastHit2D hit = Raycast2DWithOrder(Camera.main.ScreenToWorldPoint(clickPosition),Vector2.zero);
        if (hit)
        {
            return hit.transform.gameObject;
        }
        else
        {
            return null;
        }

    }

    public void DragObject(GameObject _object) // drag object process 
    {
        if (_object != null && _checkCanDrag)
        {
            Vector2 pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            _object.transform.position = new Vector2(pos.x + _mOffset.x, pos.y + _mOffset.y);
        }
    }

    public void TouchDown() // touch down process
    {
        _curentObject = ChooseObject();
        if (_curentObject != null && !IsMouseOverUi())
        {
            _checkCanDrag = true;
            _tempPosMouse = Input.mousePosition;
            Vector2 pos = Camera.main.ScreenToWorldPoint(_tempPosMouse);
            _mOffset = new Vector2(_curentObject.transform.position.x - pos.x, _curentObject.transform.position.y - pos.y); // get offset
        }
        else
        {
            _checkCanDrag = false;
        }
    }

    public void TouchUp(bool check, Vector2 pos) // touch up process
    {
        if (_curentObject != null)
        {
            _curentObject = null;
        }

        Vector3 temp = new Vector3(_tempPosMouse.x - Input.mousePosition.x, _tempPosMouse.y - Input.mousePosition.y,0);

        if (temp.magnitude <=10f) // position don't change
        {
            EffectCheck(check, pos, true);
        }
    }

    public void EffectTouch() // create effect touch in mouse position
    {
        Vector2 posTouch = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        _effectTouch.transform.position = posTouch;
        Instantiate(_effectTouch, posTouch, Quaternion.identity);
    }

    public void EffectCheck(bool check, Vector2 Pos, bool toWorld) // create effect right or wrong
    {
        if (!_checkComplete)
        {
            if (toWorld)
            {
                Pos = Camera.main.WorldToScreenPoint(Pos);
            }
            if (check)
            {
                _checkComplete = true;
                //GameObject fx = Instantiate(_effectRight, Pos, Quaternion.identity); // effect right
                //fx.transform.SetParent(UiControllers.Instance._panelGamePlay.transform);
                //fx.transform.localPosition = new Vector3(0, 0, 0);
                //Invoke("ProcessCompleteLv", .5f);
            }
            else
            {
                _checkFalse = true;
                //GameObject fx = Instantiate(_effectWrong, Pos, Quaternion.identity); // effect wrong
                //fx.transform.SetParent(UiControllers.Instance._panelGamePlay.transform);
                //fx.transform.localPosition = new Vector3(0,0,0);
            }
        }
    }

    public void ScaleControl(GameObject _object, float minSize, float maxSize) // Process Scale object
    {
        if (Input.touchCount == 2)
        {
            Touch touchZero = Input.GetTouch(0);
            Touch touchOne = Input.GetTouch(1);

            Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
            Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;

            float prevMagnitude = (touchZeroPrevPos - touchOnePrevPos).magnitude;
            float currentMagnitude = (touchZero.position - touchOne.position).magnitude;

            float difference = currentMagnitude - prevMagnitude;

            Scale(_object, difference * -0.01f, 1f, maxSize);
        }
        else
        {
            Scale(_object, Input.GetAxis("Mouse ScrollWheel"), minSize, maxSize);
        }
    } 

    private void Scale(GameObject _object, float size, float minSize, float maxSize) // scale object
    {
        if (_object != null)
        {
            float value = Mathf.Clamp(_object.transform.localScale.x - size, minSize, maxSize);
            _object.transform.localScale = new Vector3(value, value, value);
        }
    }

    public bool IsMouseOverUi() // check mouse over UI ?
    {
        return EventSystem.current.IsPointerOverGameObject();
    }

    public void ProcessCompleteLv()
    {
     //   UiControllers.Instance.UI_OnCompleteLv();
    }

    public void InitLevel(int Lv)
    {
        if (_stopDrag)
        {
            _stopDrag = false;
        }
       // UiControllers.Instance.UI_OnGamePlay();
        _checkComplete = false;
        _checkFalse = false;
        _checkDone = false;
        if (Lv < _ArrLevel.Length)
        {
            _objectLevel = Instantiate(_ArrLevel[Lv], Vector3.zero, Quaternion.identity);
        }
    }

    public float GetSpeedMouseDrag() // get speed mouse drag
    {
        float speed = 0f;
        if (Input.GetMouseButtonDown(0))
        {
            lastPos = Input.mousePosition;
        }
        else if (Input.GetMouseButton(0))
        {
            delta = Input.mousePosition - lastPos;

            delta.x = delta.x / Screen.width;
            delta.y = delta.y / Screen.height;

            speed = delta.magnitude / Time.deltaTime;

            lastPos = Input.mousePosition;
        }
        return speed;
    }

    #region Button process
    public void ButtonAnim()
    {
        var currentSelection = EventSystem.current.currentSelectedGameObject;
        Animator anim = currentSelection.GetComponent<Animator>();
        if (anim != null)
        {
            anim.Play("Scale");
        }
    }

 
    

    #endregion

    public static RaycastHit2D Raycast2DWithOrder(Vector2 origin, Vector2 direction, float distance = Mathf.Infinity, int layerMask = Physics2D.DefaultRaycastLayers) // Select the object with the highest order
    {
        RaycastHit2D[] hits = Physics2D.RaycastAll(origin, direction, distance, layerMask);

        if (hits.Length > 0) //Only function if we actually hit something
        {
            int closestItem = 0; //Set our top hit to a default of the first index in our "hits" array, in case there are no others
            int lowestLayerID = int.MaxValue;
            int highestSortingOrder = int.MaxValue;

            for (int i = 0; i < hits.Length; i++) //Loop for every extra item the raycast hit
            {
                SpriteRenderer myRenderer = hits[i].transform.GetComponent<SpriteRenderer>();
                if (myRenderer == null)
                {
                    break; // if transform has no SpriteRenderer, we leave it out
                }

                int currentLayerID = myRenderer.sortingLayerID; //Store SortingLayerID of the current item in the array being accessed

                if (currentLayerID < lowestLayerID) //If the SortingLayerID of the current array item is lower than the previous lowest
                {
                    lowestLayerID = currentLayerID; //Set the "Previous Value" to the current one since it's lower, as it will become the "Previous Lowest" on the next loop
                    closestItem = i; //Set our topHit with the Array Index value of the current closest Array item, since it currently has the highest/closest SortingLayerID
                    highestSortingOrder = myRenderer.sortingOrder; //Store SortingOrder value of the current closest object, for comparison next loop if we end up going to the "else if"
                }
                else if (currentLayerID == lowestLayerID)
                {
                    if (myRenderer.sortingOrder > highestSortingOrder)
                    { //If SortingLayerID are the same, then we need to compare SortingOrder. If the SortingOrder is lower than the one stored in the previous loop, then update values
                        closestItem = i;
                        highestSortingOrder = myRenderer.sortingOrder;
                    }
                }
            }
            return hits[closestItem];
        }
        else
        {
            return Physics2D.Raycast(origin, direction, distance, layerMask);
        }
    }
}
