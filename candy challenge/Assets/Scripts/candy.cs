using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class candy : MonoBehaviour
{
    public int piecesCount = 0;
    public GameObject extra;
    // Start is called before the first frame update
    void Start()
    {
        extra = GameObject.Find("Extras");
    }

    // Update is called once per frame
    void Update()
    {
        piecesCount = extra.transform.childCount; 
    }
}
