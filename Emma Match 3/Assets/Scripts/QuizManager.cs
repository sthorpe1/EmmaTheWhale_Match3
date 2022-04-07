using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QuizManager : MonoBehaviour
{
    public List<QuestionAndAnswer> qna;
    public GameObject[] option;
    public int currentQuestion;

    public GameObject quizPanel;
    public GameObject activationButton;
    public GameObject quizScorePanel;

    public Text questionText;
    public Text scoreText;

    int answeredQuestion = 0;
    
    public int score;

    private void Start()
    {
        activationButton.SetActive(false);

        GenerateQuestion();
    }

    public void QuizOver()
    {
        quizScorePanel.SetActive(false);

        if (score == 5)
        {
            activationButton.transform.GetChild(0).GetComponent<Text>().text = "Congratulation! You have answered all questions correctly. Tap to activate Emma's special powerrrrr";
        }
        else
        {
            activationButton.transform.GetChild(0).GetComponent<Text>().text = "You have answered " + score + "out of 5 question correctly. Tap to continue the main game.";
        }

        activationButton.SetActive(true);
    }

    public void Correct()
    {
        score++;

        scoreText.text = "Correct Answers: " + score + "/5";

        qna.RemoveAt(currentQuestion);
        
        answeredQuestion++;

        if (answeredQuestion < 5)
        {
            GenerateQuestion();
        }
        else
        {
            QuizOver();
        }
    }

    public void Incorrect()
    {
        qna.RemoveAt(currentQuestion);

        answeredQuestion++;

        if (answeredQuestion < 5)
        {
            GenerateQuestion();
        }
        else
        {
            QuizOver();
        }
    }

    void SetAnswer()
    {
        for (int i = 0; i < option.Length; i++)
        {
            option[i].GetComponent<Answers>().isCorrect = false;
            option[i].transform.GetChild(0).GetComponent<Text>().text = qna[currentQuestion].answer[i];

            if (qna[currentQuestion].correctAnswer == i + 1)
            {
                option[i].GetComponent<Answers>().isCorrect = true;
            }
        }
    }
    void GenerateQuestion()
    {
        if (qna.Count > 0)
        {
            currentQuestion = Random.Range(0, qna.Count);

            questionText.text = qna[currentQuestion].question;

            SetAnswer();
        }
        else
        {
            Debug.Log("Out of Questions");
            
            QuizOver();
        }
    }
}
