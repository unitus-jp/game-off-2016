using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooter : MonoBehaviour {

    public LineRenderer beam;
    public GameObject gunEnd;
    private Vector3 target;
    public float beamTime;
    public float beamLength;
    public GameObject[] gunFlares;
    public LayerMask mask;
    public AudioSource gunAudio;
    public GameObject explosionAudio;

    void Awake()
    {
        beam.enabled = false;
    }
        
	// Update is called once per frame
	void Update () 
    {
        #if UNITY_EDITOR

        if(Input.GetMouseButtonDown(0))
        {
            Ray ray = new Ray(transform.position, transform.forward);
            Ray mouseRay = Camera.main.ScreenPointToRay(Input.mousePosition);

            Debug.DrawRay(ray.origin,ray.direction, Color.red, 3.0f);

            RaycastHit hit;
            if(Physics.Raycast(ray, out hit, 30.0f, mask))
            {
                target = hit.point;
            }
            else
            {
                target = transform.forward;
            }

            StartCoroutine(Beam());

            if(hit.collider.gameObject.tag == "Banana")
            {
                Instantiate(explosionAudio, hit.point, Quaternion.identity);
            }
        }

         #elif UNITY_IOS || UNITY_ANDROID

        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if(touch.phase == TouchPhase.Began)
            {
                // タッチ開始
                Ray ray = new Ray(transform.position, transform.forward);
                Ray mouseRay = Camera.main.ScreenPointToRay(Input.mousePosition);

                Debug.DrawRay(ray.origin,ray.direction, Color.red, 3.0f);

                RaycastHit hit;
                if(Physics.Raycast(ray, out hit, 30.0f, mask))
                {
                    target = hit.point;
                }
                else
                {
                    target = transform.forward;
                }

                StartCoroutine(Beam());

                if(hit.collider.gameObject.tag == "Banana")
                {
                    Instantiate(explosionAudio, hit.point, Quaternion.identity);
                }
            }
        }
        #endif
	}

    IEnumerator Beam()
    {
        beam.SetPosition(0, gunEnd.transform.position);
        beam.SetPosition(1, target);
        int random = Random.Range(0, 2);
        gunFlares[random].SetActive(true);
        beam.enabled = true;
        gunAudio.Play();
        yield return new WaitForSeconds(beamTime);
        gunFlares[random].SetActive(false);
        beam.enabled = false;
    }
}
