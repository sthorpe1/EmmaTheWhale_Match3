using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LootLocker.Requests;
using UnityEngine.UI;

public class LeaderBoard : MonoBehaviour
{
    public InputField userName;
    public Text playerScore;
    public int id;
    int maxScores = 100;
    public Text[] entries;

    private void Start() 
    {
        LootLockerSDKManager.StartGuestSession("Player", (response) =>
        {
            if (response.success)
            {
                print("response successful");
            }
            else
            {
                print(response.Error);
            }
        });
    }

    public void SubmitScore()
    {
        LootLockerSDKManager.SubmitScore(userName.text, int.Parse(playerScore.text), id, (response) =>
        {
            if (response.success)
            {
                print("scores submitted");
            }
            else
            {
                print(response.Error);
            }
        });
    }

    public void ShowScores() 
    {
        LootLockerSDKManager.GetScoreList(id, maxScores, (response) =>
        {
            if (response.success)
            {
                LootLockerLeaderboardMember[] scores = response.items;

                for (int i = 0; i < scores.Length; i++)
                {
                    entries[i].text = (scores[i].rank + ".  " + scores[i].member_id + " - " + scores[i].score);
                }

                if(scores.Length < maxScores)
                {
                    for (int i = scores.Length; i < maxScores; i++)
                    {
                        entries[i].text = (i + 1).ToString() + ".   none";
                    }
                }
            }
        });
    }
}
