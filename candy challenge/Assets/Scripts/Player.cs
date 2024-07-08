using Cinemachine;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Player : MonoBehaviour
{
    public Material matt;
    public int jumpForce;
    public int moveSpeed;
    public int cameraRotateSpeed;
     public GameObject playerRankText;
      public Animator numberAnim;
    public Transform allPlankParent;
    public TextMeshProUGUI playerRankInText;
    public TextMeshProUGUI playerRankSuS;
    public List<GameObject> planksHolding;
   public List<GameObject> pics = new List<GameObject>();
    public Vector3 pressPos, direction;
    public int picnum;

    [Header("Particle effects")]
    public GameObject popParticle1;
    public GameObject popParticle2;

    [Header("Sounds")]
    public AudioClip plankPickUp;
    public AudioClip plankDown;
    public AudioClip levelFail;
    public AudioClip levelComplete;
    AudioSource audioSource;
    public float directionNormalized;
    Vector3 movement;
    public float verticalGravity = 0;
    CharacterController controller;
    public float gravity = 15f;
    public float speed;
    bool run;
    bool jump;
    bool playerController;
    bool playerMoveToPosition;
    bool rankDecided;
    bool pathCreation;
    bool hitOtherNumber;
    float yRot;
     Rigidbody rb;
     Vector3 playerReachPosition;

    Vector3 mousePosition1;
    Vector3 mousePosition2;

    RaycastHit hit;
    public int piecesCount = 0;
    public GameObject extra;
    float timer = 45;
    public TextMeshProUGUI timerText;

    private void Start()
    {
          audioSource = this.GetComponent<AudioSource>();
        rb = this.GetComponent<Rigidbody>();
        controller = GetComponent<CharacterController>();
        extra = GameObject.Find("Extras");
    }

    private void Update()
    {
        StartRunning();
        PlayersPosition();

      


        piecesCount = extra.transform.childCount;
        if (piecesCount == 0)
        {
            Win();
        }

        if (timer > 0)
        {
            float minutes = Mathf.FloorToInt(timer / 60);
            float seconds = Mathf.FloorToInt(timer % 60);
            timer -= Time.deltaTime;
            timerText.text = minutes + ":" + seconds;
        }
        else
        {
            
            timerText.text = "0" + ":" + "0";
          
            timerText.enabled = false;
            LoosePanelOn();
         
        }
     /*   if (timer < 10 && !timerOn)
        {
            timerText.color = Color.red;
            timerOn = true;
            GetComponent<AudioSource>().Play();
        }*/

        verticalGravity -= gravity * Time.deltaTime;
        movement.y = verticalGravity;

        if (Input.GetMouseButtonDown(0))
        {
            pressPos = Input.mousePosition;
            
        }
        if (Input.GetMouseButton(0))
        {
                direction = Input.mousePosition - pressPos;
            if (direction.magnitude < 10)
                return;

            directionNormalized = direction.normalized.magnitude;

            float angle = (Mathf.Atan2(-direction.y, direction.x) * Mathf.Rad2Deg) + 90f;
            Quaternion angleAxis = Quaternion.AngleAxis(angle, Vector3.forward);
            transform.eulerAngles = Vector3.up * angle;

             movement = new Vector3(0.0f, 0.0f, 1);
            movement = transform.TransformDirection(movement);
            movement = movement * directionNormalized * speed;
            verticalGravity -= gravity * Time.deltaTime;
            movement.y = verticalGravity;
           
        }
        if (Input.GetMouseButtonUp(0))
        {
            movement = new Vector3(0.0f, movement.y, 0f);
            }
        controller.Move(movement * Time.deltaTime * 5f);




    }

    private void FixedUpdate()
    {
        if(Physics.Raycast(this.transform.position, transform.TransformDirection(Vector3.down), out hit, 0.4f) && pathCreation)
        {
            if (!jump)
            {
                jump = true;
                rb.velocity = Vector3.zero;
            }
            Debug.DrawRay(this.transform.position, transform.TransformDirection(Vector3.down), Color.red, hit.distance);
        }
        

    }

    private void OnTriggerEnter(Collider other)
    {
        

        

        if(other.gameObject.CompareTag("RankDecider") && !rankDecided)
        {
            Win();
            {
                numberAnim.SetTrigger("Count");
            }
                 rankDecided = true; 
        }

        if (other.gameObject.CompareTag("inside"))
        {
            print("throw");
            other.transform.tag = "Untagged";
            Rigidbody rb = other.transform.GetComponent<Rigidbody>();
            rb.isKinematic = false;
            rb.useGravity = true;
            other.transform.parent = null;
            pathCreation = false;
            run = false;
             LoosePanelOn();

        }

        if (other.gameObject.CompareTag("extra"))
        {
            print("throw");
            other.transform.tag = "Untagged";
            other.GetComponent<Renderer>().material.color = Color.black;
           
            other.transform.parent = null;
          
        } 

        if (other.gameObject.CompareTag("OtherNumbers"))
        {
            
                playerReachPosition = other.transform.position;
                hitOtherNumber = true;
        }

        if(other.gameObject.CompareTag("Water"))
        {
            if (rankDecided)
            {
                pathCreation = false;
                run = false;
                playerController = true;
                rb.useGravity = false;
                rb.isKinematic = true;
                this.GetComponent<Collider>().enabled = false;
                playerMoveToPosition = true;
            }
            else
            {
                pathCreation = false;
                run = false;
                 LoosePanelOn();
            }
        }
    }

    public void StartRunning()
    {
        if (run)
        {
            MoveForward();

   
        }
    }

    void PlayersPosition()
    {
        if (playerMoveToPosition)
        {
            if (Vector3.Distance(this.transform.position, playerReachPosition) > 0.1f)
            {
                Vector3 playerRankPosition;

                playerRankPosition.x = playerReachPosition.x;
                playerRankPosition.z = playerReachPosition.z;

                if(!hitOtherNumber)
                {
                    playerRankPosition.y = this.transform.position.y;
                }
                else
                {
                    playerRankPosition.y = playerReachPosition.y;
                }
                this.transform.position = Vector3.MoveTowards(this.transform.position, playerRankPosition, moveSpeed * Time.deltaTime);
            }

            if (Vector3.Distance(this.transform.position, playerReachPosition) <= 0.1f)
            {
                Win();
                this.transform.rotation = Quaternion.identity;
                
                 
                    Win();
                 
                playerMoveToPosition = false;
            }
        }
    }

    public void MoveForward()
    {
      }   
    

  

    public void Win()
    {
        audioSource.PlayOneShot(levelComplete);
        popParticle1.SetActive(true);
        popParticle2.SetActive(true);
         GameManager.instance.LevelCompletePanelOn();
    }

    public void Loose()
    {
      }

    void LoosePanelOn()
    {
        audioSource.PlayOneShot(levelFail);
        GameManager.instance.LevelFailPanelOn();
        controller.enabled = false;
    }
}
