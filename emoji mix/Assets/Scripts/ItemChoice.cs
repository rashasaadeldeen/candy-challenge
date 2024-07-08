using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public enum typeItemChoice { itemHair,itemEye,itemMouth,itemShirt,itemEar,itemTrousers,itemFootwear,itemWings}

public class ItemChoice : MonoBehaviour
{
    public Button btClick;
    // Start is called before the first frame update
    public Image imItem;
    public typeItemChoice typeItem;
    public int idItem;
    void Start()
    {
        btClick.onClick.AddListener(ClickOnButton);
    }
    public void SetImageItem(Sprite _sprite,typeItemChoice _type,int _id)
    {
        imItem.sprite = _sprite;
        typeItem = _type;
        idItem = _id;
    }
    public void ClickOnButton()
    {
        Debug.Log("CHange item " + typeItem + " id:" + idItem);
        GameControl.Instance.ChangeValuesItem(typeItem,idItem);

        SoundManager.Instance.PlayClick();
    }
}
