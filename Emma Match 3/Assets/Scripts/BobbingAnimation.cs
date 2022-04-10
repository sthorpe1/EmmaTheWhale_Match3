using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BobbingAnimation : MonoBehaviour
{
    public AnimationCurve bobCurve;
   
    void Update()
    {
        transform.localPosition = new Vector3(transform.localPosition.x, bobCurve.Evaluate((Time.time % bobCurve.length)), transform.localPosition.z);
    }
}
