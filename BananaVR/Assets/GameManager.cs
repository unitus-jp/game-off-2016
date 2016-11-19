using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour {

    public GameObject introCanvas;
    public GameObject scoreCanvas;
    public GameObject OutroCanvas;
    public Shooter shooter;
    public ObjectManager objectManager;
    public ScoreManager scoreManager;

    private GameObject[] bananaPool;

    public enum GameMode
    {
        INTRO,
        GAME,
        END
    }

    public GameMode gameMode;

	// Use this for initialization
	void Start () 
    {
        CanvasReset();
	}
	

    void CanvasReset()
    {
        introCanvas.SetActive(false);
        scoreCanvas.SetActive(false);
        OutroCanvas.SetActive(false);
    }
	// Update is called once per frame
	void Update ()
    {
        Debug.Log(shooter.isShoot);
        switch(gameMode)
        {
            case GameMode.INTRO:
                Debug.Log("intro");
                CanvasReset();
                introCanvas.SetActive(true);

                if (Input.GetMouseButtonDown(0) && !shooter.isShoot)
                {
                    gameMode = GameMode.GAME;
                    objectManager.GameStart();
                }
                break;

            case GameMode.GAME:
                Debug.Log("game");
                CanvasReset();
                scoreCanvas.SetActive(true);

                if (objectManager.Timeboard <= 0)
                {
                    gameMode = GameMode.END;
                }
                break;

            case GameMode.END:
                Debug.Log("end");
                CanvasReset();
                OutroCanvas.SetActive(true);
                scoreManager.UpdateHighScore();

                bananaPool = GameObject.FindGameObjectsWithTag("Banana");

                for (int i = 0; i < bananaPool.Length; i++)
                {
                    bananaPool[i].SetActive(false);
                }

                StartCoroutine(Reload());

                break;
        }
	}

    IEnumerator Reload()
    {
        yield return new WaitForSeconds(5f);

        if (Input.GetMouseButtonDown(0) && !shooter.isShoot)
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }
}
