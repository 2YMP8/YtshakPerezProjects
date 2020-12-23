using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundMenager : MonoBehaviour
{
    public AudioClip zombieAttak, zombieGrrr,gunShoot,reload,btnClick;
    AudioSource audioSrc;

    void Start()
    {
        zombieAttak = Resources.Load<AudioClip>("ZombieAttack");
        zombieGrrr = Resources.Load<AudioClip>("ZombieGrrr");
        gunShoot = Resources.Load<AudioClip>("GunShoot");
        reload = Resources.Load<AudioClip>("Reload");
        btnClick = Resources.Load<AudioClip>("BtnClick");
        audioSrc = GetComponent<AudioSource>();
    }

    public void ZombieSounds(string name)
    {
        switch (name)
        {
            case "zombieAttak":
                audioSrc.PlayOneShot(zombieAttak);
                break;
            case "zombieGrrr":
                audioSrc.PlayOneShot(zombieGrrr);
                break;
        }
    }

    public void PlayerSounds(string name)
    {
        switch (name)
        {
            case "gunShoot":
                audioSrc.PlayOneShot(gunShoot);
                break;
            case "Reload":
                audioSrc.PlayOneShot(reload);
                break;
        }
    }

    public void Clicked()
    {
        audioSrc.PlayOneShot(btnClick);
    }
}
