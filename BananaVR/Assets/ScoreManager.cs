using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreManager : MonoBehaviour {

    public int scorePoint;
    public int highScore;
    public Text scoreText;
    public Text highScoreText;
    public Text yourScoreText;
    public GameObject newRecord;

    void Start()
    {
        scoreText.text = "0";
    }

    public void GetScore(int score)
    {
        scorePoint = scorePoint + score;
        scoreText.text = scorePoint.ToString();
    }

    public void UpdateHighScore()
    {
        if (scorePoint > PlayerPrefs.GetInt("HighScore"))
        {
            PlayerPrefs.SetInt("highScore", scorePoint);
            newRecord.SetActive(true);
            highScore = scorePoint;
        }
        else
        {
            highScore = PlayerPrefs.GetInt("HighScore");
        }

        yourScoreText.text = scorePoint.ToString();
        highScoreText.text = highScore.ToString();
    }
}
