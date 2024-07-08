using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameControl : MonoBehaviour
{
    // Start is called before the first frame update
    public static GameControl Instance;
    [Header("Button Item")]
    public Button btItemHair;
    public Button btItemEye;
    public Button btItemMouth;
    public Button btItemShirt;
    public Button btItemEar;
    public Button btItemTrousers;
    public Button btItemFootwear;
    public Button btItemWings;
    [Header("Panel Item")]
    public GameObject pnItemHair;
    public GameObject pnItemEye;
    public GameObject pnItemMouth;
    public GameObject pnItemShirt;
    public GameObject pnItemEar;
    public GameObject pnItemTrousers;
    public GameObject pnItemFootwear;
    public GameObject pnItemWings;
    [Header("Parent Item")]
    public Transform ParentItemHair;
    public Transform ParentItemEye;
    public Transform ParentItemMouth;
    public Transform ParentItemShirt;
    public Transform ParentItemEar;
    public Transform ParentItemTrousers;
    public Transform ParentItemFootwear;
    public Transform ParentItemWings;
    public GameObject PrefabItemChoice;
    [Header("Other")]
    public GameObject efTouch;
    public GameObject efHelp;
    public Text txtTime;
    float timePlay = 150;
    public GameObject PanelHelp;
    public Button btHelp;
    public Image imItemHelp;
    public Button btCloseHelp;

    public GameObject PanelWin;
    public GameObject BGRFaild;
    public GameObject PanelPause;

    public InforCharacter tempCharacter;
    
    public CharacterControl tempIMCharacter;
    public CharacterControl targetIMCharacter;
    public InforCharacter[] arrinforLevel;
    public int LevelPlay;


    bool isPlay = true;

    int numHelp = 0;
    public Text txtNumHelp;

    void Awake()
    {
        Instance = this;
    }
    void Start()
    {
 
        txtTime.text = "" + FormatTime(timePlay);
        btCloseHelp.onClick.AddListener(CloseHelp);
        PanelHelp.SetActive(false);
        PanelWin.SetActive(false);
        PanelPause.SetActive(false);
        BGRFaild.SetActive(false);
        ChangeNumHelp(0);

        HideAllItem();
        btItemEar.onClick.AddListener(ClickItemEar);
        btItemEye.onClick.AddListener(ClickItemEye);
        btItemFootwear.onClick.AddListener(ClickItemFootwear);
       // btItemHair.onClick.AddListener(ClickItemHair);
        btItemMouth.onClick.AddListener(ClickItemMouth);
        btItemShirt.onClick.AddListener(ClickItemShirt);
        btItemTrousers.onClick.AddListener(ClickItemTrousers);
        btItemWings.onClick.AddListener(ClickItemWing);

        AddAllItem();
        GetInforLevel();
        ClickItemShirt();
       
    }
    void ChangeNumHelp(int _change)
    {
        numHelp = PlayerPrefs.GetInt(KeySave.KeyHelp, 0);
        numHelp += _change;
        txtNumHelp.text = "" + numHelp;
        PlayerPrefs.SetInt(KeySave.KeyHelp, numHelp);
        PlayerPrefs.Save();
        
    }

  
    void ShowPanelHelp(Sprite _sprite)
    {
        SoundManager.Instance.PlayClick();
        PanelHelp.SetActive(true);
        imItemHelp.sprite = _sprite;
    }
    void CloseHelp()
    {
        SoundManager.Instance.PlayClick();
        PanelHelp.SetActive(false);
    }
    void AddEfect(Vector3 _pos)
    {
        GameObject _ef = GameObject.Instantiate(efTouch, transform.position, Quaternion.identity);
        _ef.transform.position = _pos;
    }
    void AddHelp(Vector3 _pos)
    {
        _pos.x += 0.3f;
        _pos.y -= 0.3f;
        GameObject _ef = GameObject.Instantiate(efHelp, transform.position, Quaternion.identity);
        _ef.transform.position = _pos;
    }

    // Update is called once per frame
    void Update()
    {
        if (isPlay)
        {
            if (timePlay > 0)
            {
                timePlay -= Time.deltaTime;
                txtTime.text = "" + FormatTime(timePlay);
                CHeckFail();
            }
        }
    }
   
    public string FormatTime(float time)
    {
        int minutes = (int)time / 60;
        int seconds = (int)time - 60 * minutes;
        //  int milliseconds = (int)(1000 * (time - minutes * 60 - seconds));
        //   return string.Format("{0:00}:{1:00}:{2:000}", minutes, seconds, milliseconds);
        return string.Format("{0:00}:{1:00}", minutes, seconds);
    }
    public void CheckWin()
    {
       
         
        
    }
    void CheckLevelPlay()
    {
        LevelPlay = PlayerPrefs.GetInt(KeySave.levelPlay, 0);
        int numLevelWin = PlayerPrefs.GetInt(KeySave.levelWin,0);
        if (LevelPlay <= numLevelWin)
        {
            numLevelWin += 1;
            PlayerPrefs.SetInt(KeySave.levelWin,numLevelWin);
            PlayerPrefs.Save();
        }
    }
    public void CHeckFail()
    {
        if (timePlay <= 0)
        {
            SoundManager.Instance.PlayWin();
            Debug.Log(" 8888Win ");
            PanelWin.SetActive(true);
            //   AdsManager.Instance.ShowFull();
            isPlay = false;
        }
    }
    void GetInforLevel()
    {
        LevelPlay = PlayerPrefs.GetInt(KeySave.levelPlay,0);
        string temp = PlayerPrefs.GetString(KeySave.InforLevel,"null");
        Debug.Log("inForlevel"+temp);
        if (temp != "null")
        {
            arrinforLevel = JsonHelper.FromJson<InforCharacter>(temp);
        }
        Debug.Log("LevelPlay:"+LevelPlay + "  LeghtArr:"+arrinforLevel.Length);
       
    }
   
    public void ShowPanelWin()
    {
        PanelWin.SetActive(true);
        SoundManager.Instance.PlayClick();
    }
    public void ClickBackHome()
    {
        Application.LoadLevel("Menu");
        SoundManager.Instance.PlayClick();
    

    }
    public void ClickResume()
    {
        PanelPause.SetActive(false);
        SoundManager.Instance.PlayClick();
    }
    public void ClickPlayAgain()
    {
        string name = Application.loadedLevelName;
        Application.LoadLevel(name);
        SoundManager.Instance.PlayClick();

    }
    public void ClickNextLevel()
    {
        
        if (LevelPlay < 200)
        {
            LevelPlay += 1;
            PlayerPrefs.SetInt(KeySave.levelPlay, LevelPlay);
            PlayerPrefs.Save();
        }
        string name = Application.loadedLevelName;
        Application.LoadLevel(name);
        SoundManager.Instance.PlayClick();

    }
    public void ShowPause()
    {
        PanelPause.SetActive(true);
        SoundManager.Instance.PlayClick();
    }
    public void ClosePanelPause()
    {
        PanelPause.SetActive(false);
        SoundManager.Instance.PlayClick();
    }
    public void ClickItemEye()
    {
        Debug.Log("Clickbtn Eye");
        HideAllItem();
        HideAllimItem();
        pnItemEye.SetActive(true);
        btItemEye.GetComponentInParent<ItemClick>().ShowClickItem(true);
        SoundManager.Instance.PlayClick();
    }
    public void ClickItemHair()
    {
        HideAllItem();
        HideAllimItem();
        pnItemHair.SetActive(true);
        btItemHair.GetComponentInParent<ItemClick>().ShowClickItem(true);
        SoundManager.Instance.PlayClick();
    }
    public void ClickItemMouth()
    {
        HideAllItem();
        HideAllimItem();
        pnItemMouth.SetActive(true);
        btItemMouth.GetComponentInParent<ItemClick>().ShowClickItem(true);
        SoundManager.Instance.PlayClick();
    }
    public void ClickItemShirt()
    {
        HideAllItem();
        HideAllimItem();
        pnItemShirt.SetActive(true);
        btItemShirt.GetComponentInParent<ItemClick>().ShowClickItem(true);
        SoundManager.Instance.PlayClick();
    }
    public void ClickItemEar()
    {
        HideAllItem();
        HideAllimItem();
        pnItemEar.SetActive(true);
        btItemEar.GetComponentInParent<ItemClick>().ShowClickItem(true);
        SoundManager.Instance.PlayClick();
    }
    public void ClickItemTrousers()
    {
        HideAllItem();
        HideAllimItem();
        pnItemTrousers.SetActive(true);
        btItemTrousers.GetComponentInParent<ItemClick>().ShowClickItem(true);
        SoundManager.Instance.PlayClick();
    }
    public void ClickItemFootwear()
    {
        HideAllItem();
        HideAllimItem();
        pnItemFootwear.SetActive(true);
        btItemFootwear.GetComponentInParent<ItemClick>().ShowClickItem(true);
        SoundManager.Instance.PlayClick();
    }
    public void ClickItemWing()
    {
        HideAllItem();
        HideAllimItem();
        pnItemWings.SetActive(true);
        btItemWings.GetComponentInParent<ItemClick>().ShowClickItem(true);
        SoundManager.Instance.PlayClick();
    }
    public void HideAllItem()
    {
        pnItemEar.SetActive(false);
        pnItemEye.SetActive(false);
        pnItemFootwear.SetActive(false);
        pnItemHair.SetActive(false);
        pnItemMouth.SetActive(false);
        pnItemShirt.SetActive(false);
        pnItemTrousers.SetActive(false);
        pnItemWings.SetActive(false);
    }
    public void HideAllimItem()
    {
        btItemEar.GetComponentInParent<ItemClick>().ShowClickItem(false);
        btItemEye.GetComponentInParent<ItemClick>().ShowClickItem(false);
//        btItemFootwear.GetComponentInParent<ItemClick>().ShowClickItem(false);
    //    btItemHair.GetComponentInParent<ItemClick>().ShowClickItem(false);
        btItemMouth.GetComponentInParent<ItemClick>().ShowClickItem(false);
        btItemShirt.GetComponentInParent<ItemClick>().ShowClickItem(false);
//        btItemTrousers.GetComponentInParent<ItemClick>().ShowClickItem(false);
  //      btItemWings.GetComponentInParent<ItemClick>().ShowClickItem(false);
    }
    public void AddItemChoice(Sprite _sprite, Transform _parent,typeItemChoice _type,int _id)
    {
        GameObject temp = GameObject.Instantiate(PrefabItemChoice, transform.position, Quaternion.identity);
        temp.transform.parent = _parent;
        temp.transform.localScale = new Vector3(1,1,1);
        temp.GetComponent<ItemChoice>().SetImageItem(_sprite,_type,_id);
    }
    public void AddAllItemOnList(List<Sprite> _newList,Transform _parent,typeItemChoice _type)
    {
        if (_newList.Count > 0)
        {
            for (int i = 0; i < _newList.Count; i++)
            {
                AddItemChoice(_newList[i] , _parent,_type,i);
            }
        }
    }
    public void AddAllItem()
    {
        ListItem temp = ListItem.Instance;
        if (temp != null) {

            AddAllItemOnList(temp.ListItemEar,ParentItemEar,typeItemChoice.itemEar);
            AddAllItemOnList(temp.ListItemEye, ParentItemEye, typeItemChoice.itemEye);
            AddAllItemOnList(temp.ListItemFootwear, ParentItemFootwear, typeItemChoice.itemFootwear);
            AddAllItemOnList(temp.ListItemHair, ParentItemHair, typeItemChoice.itemHair);
            AddAllItemOnList(temp.ListItemMouth, ParentItemMouth, typeItemChoice.itemMouth);
            AddAllItemOnList(temp.ListItemShirt, ParentItemShirt, typeItemChoice.itemShirt);
            AddAllItemOnList(temp.ListItemTrousers, ParentItemTrousers, typeItemChoice.itemTrousers);
            AddAllItemOnList(temp.ListItemWings, ParentItemWings, typeItemChoice.itemWings);

        }
    }
    public void ChangeValuesItem(typeItemChoice _type,int _id)
    {
        switch (_type)
        {
            case typeItemChoice.itemHair:
                tempCharacter.idHair = _id;
                break;
            case typeItemChoice.itemEye:
                tempCharacter.idEye = _id;
                break;
            case typeItemChoice.itemMouth:
                tempCharacter.idMouth = _id;
                break;
            case typeItemChoice.itemShirt:
                tempCharacter.idShirt = _id;
                break;
            case typeItemChoice.itemEar:
                tempCharacter.idEar = _id;
                break;
            case typeItemChoice.itemTrousers:
                tempCharacter.idTrousers = _id;
                break;
             
            case typeItemChoice.itemWings:
                tempCharacter.idWings = _id;
                break;
            default:
                break;
        }
        tempIMCharacter.SetInforIMCharacter(tempCharacter);
        CheckWin();

    }
}
