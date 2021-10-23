using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Maps;
using Microsoft.Geospatial;
using Microsoft.Maps.Unity;
using TMPro;
public class test :  LocationDistanceTest
{

    public GameObject A;
    public GameObject B;
    public void Start()
    {
          A.transform.LookAt(B.transform);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
