using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Autodestroy : MonoBehaviour
{
    public float timeDestroy;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(delayDestroy());
    }

    IEnumerator delayDestroy()
    {
        yield return new WaitForSeconds(timeDestroy);
        Destroy(this.gameObject);
    }
}
