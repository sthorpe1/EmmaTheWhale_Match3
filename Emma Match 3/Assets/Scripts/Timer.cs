using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour
{
    [SerializeField] Text TimeLabelUI;
    public float timeRemaining = 60;
    //public float timeDisplay = timeRemaining;
    public bool timerRunning = false;
    // Start is called before the first frame update
    void Start()
    {
        timerRunning = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (timerRunning)
        {
            if (timeRemaining > 0)
            {
                timeRemaining -= 1.0f * Time.deltaTime;
                //timeDisplay = timeRemaining;
            }
            else
            {
                timeRemaining = 0;
                timerRunning = false;
            }
        }
        TimeLabelUI.text = timeRemaining.ToString("F0");
    }
}
