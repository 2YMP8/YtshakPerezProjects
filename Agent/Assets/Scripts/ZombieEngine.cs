using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ZombieEngine : MonoBehaviour
{
    Rigidbody2D rb;
    int x, y, lives;
    float speed, time, angle, toColse,timeAttak,timeGrr;
    public Animator animMove,animAttack;
    public SpriteRenderer sprMove, sprAtteck;
    Transform playerTransform;
    [HideInInspector]
    bool attak;

    SoundMenager zombieSound;
    GameObject soundMenager;

    ParticleSystem psBlod;

    void Start()
    {
        soundMenager = GameObject.Find("SoundMenager");
        zombieSound = soundMenager.GetComponent<SoundMenager>();

        psBlod = GetComponent<ParticleSystem>();

        playerTransform = GameObject.FindWithTag("Player").transform;
        rb = GetComponent<Rigidbody2D>();
        speed = 1;
        time = 5;
        y = 0;
        x = 1;
        toColse = 7.5f;
        attak = false;
        lives = 2;
        timeAttak = 0;
        timeGrr = 0;

        animMove.enabled = true;
        sprMove.enabled = true;

        animAttack.enabled = false;
        sprAtteck.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (time <= 0)
        {
            x = Random.Range(-1, 1);
            y = Random.Range(-1, 1);
            time = 5;
        }
        if (x == 0 && y == 0)
        {
            //animMove.enabled = false;
            animMove.SetBool("Idle", true);
        }
        else
        {
            //animMove.enabled = true;
            animMove.SetBool("Idle", false);
        }
        time -= Time.deltaTime;
        rb.velocity = new Vector2(x * speed, y * speed);
        angle = Mathf.Atan2(y, x) * Mathf.Rad2Deg;
        rb.rotation = angle;

        CheckIfClose();

        if (attak)
        {
            if (timeAttak <= 0)
            {
                zombieSound.ZombieSounds("zombieAttak");
                timeAttak = 0.8f;
            }
            else
            {
                timeAttak -= Time.deltaTime;
            }
        }
 
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.tag == "Walls")
        {
            x = Random.Range(-1, 1);
            y = Random.Range(-1, 1);
        }

        if (collision.gameObject.tag == "Player")
        {
            attak = true;

            animAttack.enabled = true;
            sprAtteck.enabled = true;

            animMove.enabled = false;
            sprMove.enabled = false;
        }

        if (collision.gameObject.tag == "Bullet")
        {
            psBlod.Play();
            lives--;
            if (lives == 0)
            {
                GameObject createZombies = GameObject.FindWithTag("CreateZombies");
                CreateZombies dedZombie = createZombies.GetComponent<CreateZombies>();
                dedZombie.CountDedZombies();
                Destroy(gameObject);
            }
        }
    }
    private void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            attak = false;

            animAttack.enabled = false;
            sprAtteck.enabled = false;

            animMove.enabled = true;
            sprMove.enabled = true;
        }
    }

    void CheckIfClose()
    {
        if (Vector2.Distance(transform.position, playerTransform.position) < toColse)
        {
            if (timeGrr <= 0)
            {
                zombieSound.ZombieSounds("zombieGrrr");
                timeGrr = 2.5f;
            }
            else
            {
                timeGrr -= Time.deltaTime;
            }
            
            Vector3 direction = playerTransform.position - transform.position;
            float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
            rb.rotation = angle;

            transform.position = Vector2.MoveTowards(transform.position, playerTransform.position, 2 * Time.deltaTime);

            GameObject player = GameObject.FindWithTag("Player");
            PlayerEngin playerEngin = player.GetComponent<PlayerEngin>();
            if(playerEngin.gameOver == false)
            {
                playerEngin.Shoot();
            }    
        }
    }
}
