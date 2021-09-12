using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Maps;
using Microsoft.Geospatial;
using Microsoft.Maps.Unity;
using TMPro;
public class test :  LocationDistanceTest 
{

    [SerializeField] private MapRenderer _mapRenderer; 
    LatLon _latLon;
    [SerializeField] TextMeshPro _Text;
    [SerializeField] private float _TargetLat;
    [SerializeField] private float _TargetLon;
    public void CulStart()
    {
        float result;
        _latLon = _mapRenderer.Center;
        float _lat1 = (float) _latLon.LatitudeInDegrees;
        float _lon1 = (float) _latLon.LongitudeInDegrees;
        CulStart(_lat1,_lon1,_TargetLat,_TargetLon,out result);
        _Text.text = result.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
