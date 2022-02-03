using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreManager : MonoBehaviour
{
    [SerializeField] Text TextScoreUI;
    private int _scr;

    public int Score
    {
        get { return _scr; }
        set
        {
            _scr = value;

            TextScoreUI.text = Score.ToString();

            PlayerPrefs.SetInt("Score", Score);
        }
    }

    
}
