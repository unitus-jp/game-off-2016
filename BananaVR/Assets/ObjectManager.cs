 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ObjectManager : MonoBehaviour {

    public GameObject banana;
    private Vector3 randomPos;
    private float currentTime = 0f;
    public float limitTime = 60f;
    public float bananaSpawnTime = 1f;
    public float Timeboard;
    public Text timeText;
    public Image timeSlider;
    public Shooter shooter;

    public void GameStart()
    {
        shooter.isShoot = true;
        StartCoroutine(BananaSpawn());
    }
	
    IEnumerator BananaSpawn()
    {
        while (currentTime < limitTime)
        {
            randomPos.x = Random.Range(-3f, 3f);
            randomPos.y = Random.Range(-3f, 3f);
            randomPos.z = Random.Range(-3f, 3f);
            Instantiate(banana, randomPos, Quaternion.identity);
            yield return new WaitForSeconds(bananaSpawnTime);
            currentTime += bananaSpawnTime;
            Timeboard = limitTime - currentTime;
            timeText.text = Timeboard.ToString();
            timeSlider.fillAmount = Timeboard / limitTime;
        }

        shooter.isShoot = false;
    }

    void RandomPos()
    {
        float randomPos = Random.Range(-3f, 3f);

        if (randomPos > -1f && randomPos < 1f)
        {
            RandomPos();
        }
    }
}
