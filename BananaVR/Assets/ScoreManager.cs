using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreManager : MonoBehaviour {

    public int scorePoint;
    public Text scoreText;

    void Start()
    {
        scoreText.text = "0";
    }

    public void GetScore(int score)
    {
        scorePoint = scorePoint + score;
        scoreText.text = scorePoint.ToString();
    }
}
