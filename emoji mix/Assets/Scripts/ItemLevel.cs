using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemLevel : MonoBehaviour
{
    public int Level;
    int maxLevel;
    public GameObject imLock;
    public Button btClick;
    public Text txtLevel;
    // Start is called before the first frame update
    void Start()
    {
        imLock.SetActive(true);
        btClick.onClick.AddListener(ClickOpenLevel);
        CheckLock();
    }

    // Update is called once per frame
    public void SetInforLevel(int _lv)
    {
        Level = _lv;
        _lv += 1;
        txtLevel.text = "" + _lv ;
    }
    void CheckLock()
    {
        maxLevel = PlayerPrefs.GetInt(KeySave.levelWin, 0);
        if (Level <= maxLevel)
        {
            imLock.SetActive(false);
        }
    }
    void ClickOpenLevel()
    {
        if (!imLock.active)
        {
            string LevelName = "PlayGame";
            Application.LoadLevel(LevelName);
            SoundManager.Instance.PlayClick();

            PlayerPrefs.SetInt(KeySave.levelPlay, Level);
            PlayerPrefs.Save();
        }
    }
}
