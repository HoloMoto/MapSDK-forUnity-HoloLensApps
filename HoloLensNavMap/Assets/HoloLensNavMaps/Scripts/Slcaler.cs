using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.UI;

public class Slcaler : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnSliderScaler(SliderEventData data)
    {
        this.transform.localScale= new Vector3(data.NewValue*50, data.NewValue*50, data.NewValue*50);
        //this.transform.localPosition.y=
    }
}
