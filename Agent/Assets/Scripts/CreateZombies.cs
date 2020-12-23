using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CreateZombies : MonoBehaviour
{
    // x = -5.5 -- 42 y = 6.5 -- 40
    public GameObject zombiePrefab, nextLevelPanel,firstAidPrefab;
    float x, y;
    [HideInInspector]
    public int numZombies,numFirstAid;
    public Text dedZombies;


    void Start()
    {
        numZombies = 10;
        while (numZombies > 0)
        {
            x = Random.Range(-5.5f, 42);
            y = Random.Range(6.5f, 40);
            Instantiate(zombiePrefab, new Vector2(x,y), zombiePrefab.transform.rotation);
            numZombies--;
        }
        numFirstAid = 3;
        while (numFirstAid > 0)
        {
            x = Random.Range(-5.5f, 42);
            y = Random.Range(6.5f, 40);
            Instantiate(firstAidPrefab, new Vector2(x, y), zombiePrefab.transform.rotation);
            numFirstAid--;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void CountDedZombies()
    {
        numZombies = int.Parse(dedZombies.text);
        numZombies++;
        dedZombies.text = numZombies.ToString();
        if (numZombies == 10)
        {
            nextLevelPanel.SetActive(true);
        }
    }
}
