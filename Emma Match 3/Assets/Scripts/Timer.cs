using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Timer : MonoBehaviour
{
    [SerializeField] Text TimeLabelUI;
    public float timeRemaining = 60;
    //public float timeDisplay = timeRemaining;
    public bool timerRunning = false;
    //Game Over and Game Active object references are created here
    public GameObject gameOverMenu;
    public GameObject gameActiveMenu;
    // object reference for game scores and score manager script
    [SerializeField] Text TextScore;
    [SerializeField] Text FinalScore;
    ScoreManager scoreManager;

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
                // opens the Game Over screen once timer runs out
                timeRemaining = 0;
                timerRunning = false;
                gameOverMenu.SetActive(true);
                FinalScore.text = "Final Score: " + TextScore.text;
            }
        }
        TimeLabelUI.text = timeRemaining.ToString("F0");
    }

    public void ResetTime()
    {
        // disables the Game Over screen and resets values
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
