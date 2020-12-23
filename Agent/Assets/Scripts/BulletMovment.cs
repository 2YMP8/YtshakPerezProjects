using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletMovment : MonoBehaviour
{
    GameObject soundMenager;
    SoundMenager bulletSound;

    private void Awake()
    {
        soundMenager = GameObject.Find("SoundMenager");
        bulletSound = soundMenager.GetComponent<SoundMenager>();
        bulletSound.PlayerSounds("gunShoot");
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(0.3f, 0, 0);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        Destroy(gameObject);
    }
}
