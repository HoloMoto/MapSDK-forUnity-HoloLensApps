using System.Collections;
using System.Collections.Generic;
using System;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
#if UNITY_WSA && !UNITY_EDITOR
using Windows.Devices.Geolocation;
#endif
using TMPro;
using Microsoft.Maps.Unity;
using Microsoft.Geospatial;

public class GetPlayerLocation : MonoBehaviour
{
    public MapRenderer mapRenderer;
    public TextMeshPro debugText;
    private uint _desireAccuracyInMetersValue = 0;
    public LatLonMover mover;
    public ReverseGeocodeOnClick _rgoc;
    // Start is called before the first frame update
    async void Start()
    {
        debugText.text = "Initialization.";
       
#if UNITY_WSA && !UNITY_EDITOR
        var accessStatus = await Geolocator.RequestAccessAsync();
        switch (accessStatus)
        {
            case GeolocationAccessStatus.Allowed:
                debugText.text = "Waiting for update...";
                Geolocator geolocator = new Geolocator { DesiredAccuracyInMeters = _desireAccuracyInMetersValue };
                Geoposition pos = await geolocator.GetGeopositionAsync();
                UpdateLocationData(pos);
                break;

            case GeolocationAccessStatus.Denied:
                debugText.text = "Access to location is denied.";
                break;

            case GeolocationAccessStatus.Unspecified:
                debugText.text = "Unspecified error.";
                UpdateLocationData(null);
                break;
        }
#endif
    }

#if UNITY_WSA && !UNITY_EDITOR
    private void UpdateLocationData(Geoposition position)
    {
        if (position == null)
        {
            debugText.text = "No data";
        }
        else
        {
            debugText.text = position.Coordinate.Point.Position.Latitude.ToString() + "\n" + position.Coordinate.Point.Position.Longitude.ToString();
            mapRenderer.SetMapScene(new MapSceneOfLocationAndZoomLevel(new LatLon(position.Coordinate.Point.Position.Latitude, position.Coordinate.Point.Position.Longitude), 17f));
             _rgoc.OnMapSent(new LatLon(position.Coordinate.Point.Position.Latitude, position.Coordinate.Point.Position.Longitude));
              mover.enabled = true;
        }
    }
#endif

}
