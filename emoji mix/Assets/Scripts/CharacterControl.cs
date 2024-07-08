using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterControl : MonoBehaviour
{
    // Start is called before the first frame update
    public SpriteRenderer SpriteHair;
    public SpriteRenderer SpriteEye;
    public SpriteRenderer SpriteMouth;
    public SpriteRenderer SpriteShirt;
    public SpriteRenderer SpriteEar;
    public SpriteRenderer SpriteTrousers;
    public SpriteRenderer SpriteFootwear;
    public SpriteRenderer SpriteWings;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void SetInforIMCharacter(InforCharacter _infor)
    {
        ChangeSpriteEar(ListItem.Instance.ListItemEar[_infor.idEar]);
        ChangeSpriteEye(ListItem.Instance.ListItemEye[_infor.idEye]);
     //   ChangeSpriteFootwear(ListItem.Instance.ListItemFootwear[_infor.idFootwear]);
      //  ChangeSpriteHair(ListItem.Instance.ListItemHair[_infor.idHair]);
        ChangeSpriteMouth(ListItem.Instance.ListItemMouth[_infor.idMouth]);
        ChangeSpriteShirt(ListItem.Instance.ListItemShirt[_infor.idShirt]);
        ChangeSpriteTrousers(ListItem.Instance.ListItemTrousers[_infor.idTrousers]);
        ChangeSpriteWings(ListItem.Instance.ListItemWings[_infor.idWings]);
    }
     void ChangeSprite(SpriteRenderer _sp,Sprite _newsprite)
    {
        _sp.sprite = _newsprite;
    }
    public void ChangeSpriteHair(Sprite _newvl)
    {
        ChangeSprite(SpriteHair, _newvl);
    }
    public void ChangeSpriteEye(Sprite _newvl)
    {
        ChangeSprite(SpriteEye, _newvl);
    }
    public void ChangeSpriteMouth(Sprite _newvl)
    {
        ChangeSprite(SpriteMouth, _newvl);
    }
    public void ChangeSpriteShirt(Sprite _newvl)
    {
        ChangeSprite(SpriteShirt, _newvl);
    }
    public void ChangeSpriteEar(Sprite _newvl)
    {
        ChangeSprite(SpriteEar, _newvl);
    }
    public void ChangeSpriteTrousers(Sprite _newvl)
    {
        ChangeSprite(SpriteTrousers, _newvl);
    }
    public void ChangeSpriteFootwear(Sprite _newvl)
    {
        ChangeSprite(SpriteFootwear, _newvl);
    }
    public void ChangeSpriteWings(Sprite _newvl)
    {
        ChangeSprite(SpriteWings, _newvl);
    }
}
