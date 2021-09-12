using System.Collections;
using System.Collections.Generic;
using Microsoft.Geospatial;
using UnityEngine;

public class LocationDistanceTest : MonoBehaviour
{

    
    public float _ErathRadius = 6371;

    public void CulStart(float _lat1,float _lon1,float _lat2,float _lon2 ,out float _distance)
    {
        _lat1 = _lat1 * Mathf.PI / 180;
        _lat2 = _lat2 * Mathf.PI / 180;
        _lon1 = _lon1 * Mathf.PI / 180;
        _lon2 = _lon2 * Mathf.PI / 180;
        float d1 = Mathf.Acos(Mathf.Cos(_lat1) * Mathf.Cos(_lat2) * Mathf.Cos(_lon2 - _lon1) +
                              Mathf.Sin(_lat1) * Mathf.Sin(_lat2));

        _distance = _ErathRadius *d1;
    }


}
