using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PlayerEngin : MonoBehaviour
{
    public Joystick MoveJoystick,RotateJoystick;
    float speed;
    float angle;
    float time,timeShoot;
    float rotateX, rotateY;
    Rigidbody2D rb;
    public Animator run,animPlayer;
    public Transform FierPoint;
    public GameObject bulletPrefab,muzzlePrefab;
    GameObject muzzle;
    public Image life, life2, life3;
    int lifes;
    public Text txtAmmo,akAmmo;
    public GameObject goAkAmmo;
    public Image infinity;
    int ammo,playerAmmo;
    GameObject soundMenager;
    SoundMenager reload;
    string wepon;
    public GameObject gameOverPanle;
    [HideInInspector]
    public bool gameOver;
    ParticleSystem psBlod;


    void Start()
    {
        soundMenager = GameObject.Find("SoundMenager");
        reload = soundMenager.GetComponent<SoundMenager>();

        psBlod = GetComponent<ParticleSystem>();

        speed = 5f;
        rb = GetComponent<Rigidbody2D>();
        run.enabled = false;
        wepon = "Pistol";
        timeShoot = 0.5f; ;
        playerAmmo = 7;
        ammo = playerAmmo;
        txtAmmo.text = playerAmmo.ToString();
        lifes = 3;
        gameOver = false;
    }

    void Update()
    {

        //if (MoveJoystick.Vertical == 0 && MoveJoystick.Horizontal == 0)
        //{
        //    transform.position = new Vector2(transform.position.x, transform.position.y);
        //}

        //transform.Translate(MoveJoystick.Horizontal * speed, MoveJoystick.Vertical * speed, 0);
        rb.velocity = new Vector2(MoveJoystick.Horizontal * speed, MoveJoystick.Vertical * speed);
        if (RotateJoystick.Vertical != 0 && RotateJoystick.Horizontal != 0)
        {
            rotateY = RotateJoystick.Vertical;
            rotateX = RotateJoystick.Horizontal;
        }
        angle = Mathf.Atan2(rotateY, rotateX) * Mathf.Rad2Deg;
        rb.rotation = angle;

     //   if (MoveJoystick.Vertical != 0 && MoveJoystick.Horizontal != 0)
        if (rb.velocity != Vector2.zero)
        {
            run.enabled = true;
        }
        else
        {
            run.enabled = false;
        }

    }

    public void Shoot()
    {
        if (time <= 0)
        {
            if (ammo > 0)
            {
                AnimMenagment(wepon, "Shoot");
                Instantiate(bulletPrefab, FierPoint.position, FierPoint.rotation);
                muzzle = Instantiate(muzzlePrefab, FierPoint.position, FierPoint.rotation);
                Destroy(muzzle.gameObject, 0.09f);
                time = timeShoot;
                ammo--;
                txtAmmo.text = ammo.ToString();
            }
            else
            {
                reload.PlayerSounds("Reload");
                AnimMenagment(wepon, "Reload");

                if (akAmmo.enabled == true && akAmmo.text != "0")
                {
                    int i = int.Parse(akAmmo.text);
                    i -= playerAmmo;
                    akAmmo.text = i.ToString();
                }
                else
                {
                    wepon = "Pistol";
                    animPlayer.SetBool("AK", false);
                    playerAmmo = 7;
                    timeShoot = 0.5f;
                    infinity.enabled = true;
                    goAkAmmo.SetActive(false);
                    FierPoint.position = new Vector2(FierPoint.position.x - 0.06f, FierPoint.position.y - 0.06f);
                }
                ammo = playerAmmo;
                txtAmmo.text = ammo.ToString();
            }
        }
        else
        {
            time -= Time.deltaTime;
        }

    }

    void AnimMenagment(string weponName,string animName)
    {
        if (weponName == "Pistol")
        {
            switch (animName)
            {
                case "Shoot":
                    animPlayer.SetTrigger("ShootPistol");
                    break;
                case "Reload":
                    animPlayer.SetTrigger("ReloadPistol");
                    break;
            }
        }
        else
        {
            switch (animName)
            {
                case "Shoot":
                    animPlayer.SetTrigger("ShootAk");
                    break;
                case "Reload":
                    animPlayer.SetTrigger("ReloadAk");
                    break;
            }
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Zombie")
        {
            lifes--;
            psBlod.Play();
            if(lifes > 0)
            {
                switch (lifes)
                {
                    case 2:
                        life.enabled = false;
                        break;
                    case 1:
                        life2.enabled = false;
                        break;
                }
            }
            else
            {
                life3.enabled = false;
               // print("GAME OVER");
                gameOverPanle.SetActive(true);
                MoveJoystick.gameObject.SetActive(false);
                RotateJoystick.gameObject.SetActive(false);
                gameOver = true;
                var main = psBlod.main;
                main.loop = true;
                run.enabled = false;
            }
        }

        if (collision.gameObject.tag == "FirstAid")
        {
            if (lifes != 3)
            {
                switch (lifes)
                {
                    case 2:
                        life.enabled = true;
                        break;
                    case 1:
                        life2.enabled = true;
                        break;
                }
                lifes++;
                Destroy(collision.gameObject);
            }
        }

        if (collision.gameObject.tag == "Ak47")
        {
            Destroy(collision.gameObject);
            wepon = "AK";
            timeShoot = 0.3f;
            animPlayer.SetBool("AK", true);
            playerAmmo = 30;
            ammo = playerAmmo;
            txtAmmo.text = playerAmmo.ToString();
            infinity.enabled = false;
            goAkAmmo.SetActive(true);
            akAmmo.text = "30";
            FierPoint.position = new Vector2(FierPoint.position.x+0.06f, FierPoint.position.y+0.06f);
        }
    }
}



//Nisyonot
//GameObject zombie = GameObject.FindWithTag("Zombie");
//ZombieEngine zombieEngine = zombie.GetComponent<ZombieEngine>();
//if (zombieEngine.close == true)
//{
//    if (timeShoot <= 0)
//    {
//        Instantiate(bulletPrefab, FierPoint.position, FierPoint.rotation);
//        timeShoot = 1;
//    }
//    else
//    {
//        timeShoot -= Time.deltaTime;
//    }
//}

//if (joystick.Horizontal >= .1f)
//{
//    transform.Translate(speed, 0, 0);
//}
//else if (joystick.Horizontal <= -.1f)
//{
//    transform.Translate(-speed, 0, 0);
//}
//else if (joystick.Vertical >= .1f)
//{
//    transform.Translate(0, speed, 0);
//}
//else if (joystick.Vertical <= -.1f)
//{
//    transform.Translate(0, -speed, 0);
//}