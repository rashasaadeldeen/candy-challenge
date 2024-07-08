using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public AudioSource audSM;
    public AudioSource audSS;
    public AudioClip audClick;
    public AudioClip audWin;
    public AudioClip audTrue;
    

    bool isMusic = true;
    bool isSound = true;



    private static SoundManager instance;
    public static SoundManager Instance {
        get { return instance;
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
    void Start()
    {
        PlayMusic();
    }
    public void ChangeIsSound(bool _vl)
    {
        isSound = _vl;
    }
    public void ChangeIsMusic(bool _vl)
    {
        isMusic = _vl;
        PlayMusic();
    }
    public void PlayClick()
    {
        PlayAud(audClick);
    }
    public void PlayWin()
    {
        PlayAud(audWin);
    }
    public void PlayTrue()
    {
        PlayAud(audTrue);
    }
    public void PlayAud(AudioClip _aud)
    {
        if (isSound) {
            audSS.PlayOneShot(_aud);
        }
    }
    public void PlayMusic()
    {
        if (isMusic)
        {
            audSM.Play();
        }
        else
        {
            audSM.Stop();
        }

    }
}
