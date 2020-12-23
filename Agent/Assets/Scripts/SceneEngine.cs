using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneEngine : MonoBehaviour
{
    int maineScene;

    void Start()
    {
        maineScene = SceneManager.GetActiveScene().buildIndex - 1;
    }

    public void Retry()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void MainScene()
    {
        SceneManager.LoadScene(maineScene);
    }


}
