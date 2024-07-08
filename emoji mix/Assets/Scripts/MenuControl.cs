using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuControl : MonoBehaviour
{
    public static MenuControl Instance;
    int numHelp = 0;
    public Text txtHelp;
    public Button btShowADS;
    public GameObject prefabBtClick;
    public Transform ParentButton;
    void Awake()
    {
        Instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
       //PlayerPrefs.DeleteAll();
        CheckHelp();
     //   btShowADS.onClick.AddListener(ShowAdsReward);
        AddButtonLevel();
    }

    public void CheckHelp()
    {
        numHelp = PlayerPrefs.GetInt(KeySave.KeyHelp, 3);
        txtHelp.text = "" + numHelp;
        PlayerPrefs.SetInt(KeySave.KeyHelp, numHelp);
        PlayerPrefs.Save();
    }
    public void ShowAdsReward()
    {
//        AdsManager.Instance.ShowRewardVideo();
    }
    public void AddButtonLevel()
    {
        int tempOpenLevel = PlayerPrefs.GetInt(KeySave.levelWin,0);
        if (tempOpenLevel <= 19)
        {
            PlayerPrefs.SetInt(KeySave.levelWin,19);
            PlayerPrefs.Save();
        }


        for (int i = 0; i < 200; i++)
        {
            GameObject _btClick = GameObject.Instantiate(prefabBtClick, transform.position, Quaternion.identity);
            _btClick.transform.parent = ParentButton;
            _btClick.transform.localScale = new Vector3(1,1,1);
            ItemLevel _Scripts = _btClick.GetComponent<ItemLevel>();
            _Scripts.SetInforLevel(i);
        }
    }

}
