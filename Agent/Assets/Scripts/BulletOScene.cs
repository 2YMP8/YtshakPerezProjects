using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletOScene : MonoBehaviour
{
    public GameObject zombiePrefab;
    void Update()
    {
        transform.Translate(0.1f, 0, 0);
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        Destroy(gameObject);
        Instantiate(zombiePrefab, new Vector2(3.2f, -0.5f), zombiePrefab.transform.rotation);
    }
}