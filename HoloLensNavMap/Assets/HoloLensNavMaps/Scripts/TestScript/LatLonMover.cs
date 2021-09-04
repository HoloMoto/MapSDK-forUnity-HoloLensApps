using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Maps.Unity;
using Microsoft.Geospatial;

public class LatLonMover : MonoBehaviour
{
    public MapRenderer renderer;

    public float lat;
    public float lon;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(getdeta());
    }

    IEnumerator getdeta()
    {

        yield return new WaitForMapLoaded(renderer);
        lat = (float)renderer.Center.LatitudeInDegrees;
        lon = (float)renderer.Center.LongitudeInDegrees;
    }
    public void latadd()
    {
        lat += 0.001f;
        SentMapdata();
    }

    public void latmin()
    {
        lat -= 0.001f;
        SentMapdata();
    }
    public void lonadd()
    {
        lon += 0.001f;
        SentMapdata();
    }

    public void lonmin()
    {
        lon -= 0.001f;
        SentMapdata();
    }

    public void SentMapdata()
    {
        renderer.SetMapScene(new MapSceneOfLocationAndZoomLevel(new LatLon(lat,lon), 17f));
    }
}
