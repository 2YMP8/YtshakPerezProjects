using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovment : MonoBehaviour
{
    public Transform player;

    // Update is called once per frame
    void Update()
    {
        if (transform.position.x != 0 && transform.position.y != 0)
        {
            transform.position = new Vector3(player.position.x, player.position.y, -10);
        }
        if (transform.position.x <= 0)
        {
            transform.position = new Vector3(transform.position.x, player.position.y, -10);
        }
        if (transform.position.y <= 0)
        {
            transform.position = new Vector3(player.position.x, transform.position.y, -10);
        }
    }
}
