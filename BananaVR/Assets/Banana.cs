using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Banana : MonoBehaviour {

    public GameObject explosion;
    public int getScore;
    private ScoreManager scoreManager;

    public void ExplodeObject()
    {
        Instantiate(explosion, transform.position, Quaternion.identity);
        scoreManager = GameObject.Find("ScoreManager").GetComponent<ScoreManager>();
        scoreManager.GetScore(getScore);
        Destroy(gameObject);
    }
}
