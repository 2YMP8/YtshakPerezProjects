using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OpenScene : MonoBehaviour
{
    public GameObject bulletPrefab, ZombiePrefab,lebelPanel;
    public Transform fierPoint;
    float time;
    int gameScene;

    void Start()
    {
        gameScene = SceneManager.GetActiveScene().buildIndex + 1;
        Instantiate(ZombiePrefab, new Vector2(3.2f,-0.5f),ZombiePrefab.transform.rotation);
        time = 2.5f;
    }

    // Update is called once per frame
    void Update()
    {
        if (time <= 0)
        {
            Instantiate(bulletPrefab, fierPoint.position, fierPoint.rotation);
            time = 2.5f;
        }
        else
        {
            time -= Time.deltaTime;
        }
    }

    public void OpenPanelLevel()
    {
        lebelPanel.SetActive(true);
    }

    public void LoadGameScene()
    {
        SceneManager.LoadScene(gameScene);
    }
}
