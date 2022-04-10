using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrossSceneAudio : MonoBehaviour
{
    private static CrossSceneAudio _instance;
 
    public static CrossSceneAudio instance
    {
        get
        {
            if(_instance == null)
            {
                _instance = GameObject.FindObjectOfType<CrossSceneAudio>();
 
                //Tell unity not to destroy this object when loading a new scene!
                DontDestroyOnLoad(_instance.gameObject);
            }
 
            return _instance;
        }
    }
 
    void Awake() 
    {
        if(_instance == null)
        {
            //If I am the first instance, make me the Singleton
            _instance = this;
            DontDestroyOnLoad(this);
        }
        else
        {
            //If a Singleton already exists and you find
            //another reference in scene, destroy it!
            if(this != _instance)
                Destroy(this.gameObject);
        }
    }

    public void Play()
    {
        //Play some audio!
    }
}
