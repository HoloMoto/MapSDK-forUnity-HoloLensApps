using System;
using System.Collections;
using System.Collections.Generic;
using Microsoft.Geospatial;
using UnityEngine;

public class EarthArrowTest : MonoBehaviour
{
    [SerializeField] private GameObject _Arrow;
    public float _lat1;
    public float _lon1;
    public double _Posx1;
    public double _Posy1;
    public double _Posz1;
    public float _latRadian1;
    public float _lonRadian1;
    public float _latOrigin;
    public float _lonOrigin;
    public double _PosxOrigin;
    public double _PosyOrigin;
    public double _PoszOrigin;
    public  float _latRadianOrigin;
    public float _lonRadianOrigin;
    [SerializeField] private float _EarthRadius = 6378136.6f;

    public void Start()
    {
        Cul();
        
    }

    public void Cul()
    {
        //Convert latitude and longitude to radians
        _latRadian1 = _lat1 * Mathf.PI / 180;
        _lonRadian1 = _lon1 * Mathf.PI / 180;
        _latRadianOrigin = _latOrigin * Mathf.PI / 180;
        _lonRadianOrigin = _lonOrigin * Mathf.PI / 180;
        
        Debug.Log(_latOrigin * Mathf.PI / 180);

        //Calculate the coordinates of two points with the Earth's core as the origin.
        _Posx1 = _EarthRadius * Mathf.Cos(_latRadian1) * Mathf.Cos(_lonRadian1);
        _Posz1 = _EarthRadius * Mathf.Cos(_latRadian1) * Mathf.Sin(_lonRadian1);
        _Posy1 = _EarthRadius * Mathf.Sin(_latRadian1);

        _PosxOrigin = _EarthRadius * Mathf.Cos(_latRadianOrigin) * Mathf.Cos(_lonRadianOrigin);
        _PoszOrigin = _EarthRadius * Mathf.Cos(_latRadianOrigin) * Mathf.Sin(_lonRadianOrigin);
        _PosyOrigin = _EarthRadius * Mathf.Sin(_latRadianOrigin);
        CulArrow();
    }

    public void CulArrow()
    {
        
        var _Arrowdummy = new GameObject("Dummy");
        _Arrowdummy.transform.position = new Vector3((float)_PosxOrigin, (float)_PosyOrigin, (float)_PoszOrigin);
        _Arrowdummy.transform.LookAt(new Vector3((float)_Posx1,(float)_Posy1,(float)_Posz1));
        _Arrowdummy.transform.localEulerAngles =new Vector3(_Arrowdummy.transform.rotation.eulerAngles.x+90f,_Arrowdummy.transform.rotation.eulerAngles.y,_Arrowdummy.transform.rotation.eulerAngles.z);
        _Arrow.transform.rotation = _Arrowdummy.transform.rotation;
    }
}
