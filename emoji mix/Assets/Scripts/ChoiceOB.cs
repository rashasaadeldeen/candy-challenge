using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using DG.Tweening;

public class ChoiceOB : MonoBehaviour,IPointerDownHandler
{

    public bool isClick = true;
    public void OnPointerDown(PointerEventData eventData)
    {
        Debug.Log("Click to OBJ:"+gameObject.name);
        OnClickOBJ();
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    void OnClickOBJ()
    {
        if (isClick)
        {
            float temScale = transform.localScale.x;
            temScale = temScale * 1.05f;
            Sequence mysequence = DOTween.Sequence();
            mysequence.Append(transform.DOScale(new Vector3(temScale, temScale, temScale), 0.5f)).SetLoops(-1, LoopType.Yoyo);
            mysequence.Play();
            // mysequence.Play();
            isClick = false;

        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
