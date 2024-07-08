using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ItemClick : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject imHide;
    public GameObject imActive;
    public Image imItem;
    public Button btClick;

    void Start()
    {
        imHide.SetActive(true);
        imActive.SetActive(false);

    }

  
    public void ShowClickItem(bool _isShow)
    {
        imActive.SetActive(_isShow);
    }

  

}
