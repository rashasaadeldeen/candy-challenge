using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ListItem : MonoBehaviour
{
    public List<Sprite> ListItemHair = new List<Sprite>();
    public List<Sprite> ListItemEye = new List<Sprite>();
    public List<Sprite> ListItemMouth = new List<Sprite>();
    public List<Sprite> ListItemShirt = new List<Sprite>();
    public List<Sprite> ListItemEar = new List<Sprite>();
    public List<Sprite> ListItemTrousers = new List<Sprite>();
    public List<Sprite> ListItemFootwear = new List<Sprite>();
    public List<Sprite> ListItemWings = new List<Sprite>();






    private static ListItem instance;
    public static ListItem Instance
    {
        get
        {
            return instance;
        }
    }
    void Awake()

    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }
    }


    // Start is called before the first frame update
    void Start()
    {
       // CreatenewList();
        string temp = PlayerPrefs.GetString(KeySave.InforLevel,"null");
        if (temp == "null")
        {
            CreatenewList();
        }
        else
        {
            Debug.Log("INforLevel:" + temp);
        }
    }

    int RandomItem(List<Sprite> _List)
    {
        if (_List.Count > 0)
        {
            int _id = Random.Range(0, _List.Count);
            return _id;
        }
        else return 0;
    }
    public void CreatenewList()
    {
        List<InforCharacter> listQuest = new List<InforCharacter>();
        for (int i = 0; i < 200; i++)
        {
            InforCharacter newInfor = new InforCharacter();
            newInfor.idEar = RandomItem(ListItemEar);
            newInfor.idEye = RandomItem(ListItemEye);
            newInfor.idFootwear = RandomItem(ListItemFootwear);
            newInfor.idHair = RandomItem(ListItemHair);
            newInfor.idMouth = RandomItem(ListItemMouth);
            newInfor.idShirt = RandomItem(ListItemShirt);
            newInfor.idTrousers = RandomItem(ListItemTrousers);
            newInfor.idWings = RandomItem(ListItemWings);
            listQuest.Add(newInfor);
        }
        string inforLevel = JsonHelper.ToJson(listQuest);
        PlayerPrefs.SetString(KeySave.InforLevel, inforLevel);
        PlayerPrefs.Save();
    }
    public InforCharacter RandomInforCharacter()
    {
        InforCharacter newInfor = new InforCharacter();
        newInfor.idEar = RandomItem(ListItemEar);
        newInfor.idEye = RandomItem(ListItemEye);
        newInfor.idFootwear = RandomItem(ListItemFootwear);
        newInfor.idHair = RandomItem(ListItemHair);
        newInfor.idMouth = RandomItem(ListItemMouth);
        newInfor.idShirt = RandomItem(ListItemShirt);
        newInfor.idTrousers = RandomItem(ListItemTrousers);
        newInfor.idWings = RandomItem(ListItemWings);

        return newInfor;
    }
}
