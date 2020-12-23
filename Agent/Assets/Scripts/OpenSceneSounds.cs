using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenSceneSounds : MonoBehaviour
{
    public AudioClip btnClick;
    AudioSource audioSrc;

    void Start()
    {
        btnClick = Resources.Load<AudioClip>("BtnClick");
        audioSrc = GetComponent<AudioSource>();
    }

    public void Clicked()
    {
        audioSrc.PlayOneShot(btnClick);
    }
}
