using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ShowHideOb : MonoBehaviour,IPointerDownHandler
{
    public GameObject stage1,stage2;

    public void OnPointerDown(PointerEventData eventData)
    {
        Debug.Log("Click on :" + this.gameObject.name);
        ChangeStage();
        SoundManager.Instance.PlayClick();
     //   Destroy(this.gameObject);
    }

    // Start is called before the first frame update
    void Start()
    {
        stage1.SetActive(true);
        stage2.SetActive(true);
        StartCoroutine(delayHide());
    }

    void ChangeStage()
    {
        if (stage1.active)
        {
            stage1.SetActive(false);
            stage2.SetActive(true);
        }
        else
        {
            stage2.SetActive(false);
            stage1.SetActive(true);
        }
    }
    IEnumerator delayHide()
    {
        yield return new WaitForSeconds(0.1f);
        {
            stage1.SetActive(true);
            stage2.SetActive(false);
        }
    }
}
