using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Maps;
using Microsoft.Geospatial;

public class test : MonoBehaviour
{
    public ReverseGeocodeOnClick reverseGeocodeOnClick;
    // Start is called before the first frame update
    void Start()
    {

        reverseGeocodeOnClick.OnMapSent(new LatLon(35.3625, 138.7306));
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
