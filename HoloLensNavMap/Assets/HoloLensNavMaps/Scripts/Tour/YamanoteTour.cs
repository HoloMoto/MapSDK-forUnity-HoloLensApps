using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Maps.Unity;
using Microsoft.Geospatial;
using Unity.VisualScripting;
using TMPro;

public class YamanoteTour : MonoBehaviour
{
    public  MapPinProvider _mapPinProvider;
    public MapLayer _mapLayer;

    public TextMeshPro  _descriptionText;
    public TextMeshPro  _descriptionTitle;
    //Defalt Location 37.7,137.9,4.8
    [SerializeField] private TextAsset _tourCSV;
    private static readonly List<MapScene> MapScenes =
        new List<MapScene>
        {
            // TokyoStation -> Yurakucho
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.681382, 139.76608399999998), 16.8f),
            // Yurakucho->shinbashi
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.675069, 139.763328), 17.3f),
            // Shinbashi
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.665498	, 139.75964), 16.0f),
            // Hamamatucho
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.655646, 139.756749), 17.0f),
            // Tamachi
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.645736	, 139.74757499999998), 17.0f),
            // TakanawaGateway
            // Shinagawa
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.630152, 139.74044000000004), 16.15f),
            // Osaki
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.6197, 	139.72855300000003), 17.0f),
            // Gotanda
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.626446, 139.72344399999997), 17.5f),
            // Meguro
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.633998	, 139.715828), 17.5f),
            // Ebisu
            new MapSceneOfLocationAndZoomLevel(new LatLon(	35.64669, 139.710106), 17.5f),
            // Shibuya
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.658517, 139.70133399999997), 15f),
            // Harajuku
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.670168	,139.70268699999997),17f),
            // Yoyogi
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.683061,139.702042),17f),
            // Shinjuku
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.690921,139.70025799999996),17f),
            // ShinOkubo
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.701306,139.70004399999993),17f),
            // Takadanobaba
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.712285,	139.70378200000005),17f),
            // Mejiro
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.721204	,139.706587),17f),
            // Ikebukuro
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.728926	,139.71038),17f),
            // Otuka
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.731401	,139.72866199999999),17f),
            // Sugamo
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.733492,139.73934499999996),17f),
            // Komagome
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.736489,139.74687500000005),17f),
            // Tabata
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.738062	,139.76085999999998),17f),
            // Nishi Nippori
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.732135,139.76678700000002),17f),
            // Nippori
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.727772	,139.770987),17f),
            // Uguisudani
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.720495	,139.77883700000007),17f),
            // Ueno
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.713768,139.77725399999997),17f),
            // Okachimachi
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.707438	,139.774632),17f),
            // Akihabara
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.698683	,139.77421900000002),17f),
            // Kanda
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.69169	,139.77088300000003),17f)
        };
     private List<string> MapScenesTitle =
        new List<string>
        {
            // TokyoStation -> Yurakucho
            "Tokyo St.",
            // Yurakucho->shinbashi
            "Yurakucho St.",
            // Shinbashi
            "Shinbashi St.",
            // Hamamatucho
            "Hamamatucho St.",
            // Tamachi
            "Tamachi St.",
            // TakanawaGateway
            // Shinagawa
            "Shinagawa St.",
            // Osaki
            "Osaki St.",
            // Gotanda
            "Gotanda St.",
            // Meguro
            "Meguro St.",
            // Ebisu
            "Ebisu St.",
            // Shibuya
            "Shibuya St.",
            // Harajuku
            "Harajuku St.",
            // Yoyogi
            "Yoyogi St.",
            // Shinjuku
            "Shinjuku St.",
            // ShinOkubo
            "ShinOkubo St.",
            // Takadanobaba
            "Takadanobaba St.",
            // Mejiro
            "Mejiro St.",
            // Ikebukuro
            "Ikebukuro St.",
            // Otuka
            "Otuka St.",
            // Sugamo
            "Sugamo St.",
            // Komagome
            "Komagome St.",
            // Tabata
            "Tabata St.",
            // Nishi Nippori
            "Nishi Nippori St.",
            // Nippori
            "Nippori St.",
            // Uguisudani
            "Uguisudani???St.",
            // Ueno
            "Ueno St.",
            // Okachimachi
            "Okachimachi St.",
            // Akihabara
            "Akihabara St.",
            // Kanda
            "Kanda St."
        };
     private List<string> MapScenesText =
         new List<string>
         {
             // TokyoStation -> Yurakucho
             "Tokyo St.",
             // Yurakucho->shinbashi
             "Yurakucho St.",
             // Shinbashi
             "Shinbashi St.",
             // Hamamatucho
             "Hamamatucho St.",
             // Tamachi
             "Tamachi St.",
             // TakanawaGateway
             // Shinagawa
             "Shinagawa St.",
             // Osaki
             "Osaki St.",
             // Gotanda
             "Gotanda St.",
             // Meguro
             "Meguro St.",
             // Ebisu
             "Ebisu St.",
             // Shibuya
             "Shibuya St.",
             // Harajuku
             "Harajuku St.",
             // Yoyogi
             "Yoyogi St.",
             // Shinjuku
             "Shinjuku St.",
             // ShinOkubo
             "ShinOkubo St.",
             // Takadanobaba
             "Takadanobaba St.",
             // Mejiro
             "Mejiro St.",
             // Ikebukuro
             "Ikebukuro St.",
             // Otuka
             "Otuka St.",
             // Sugamo
             "Sugamo St.",
             // Komagome
             "Komagome St.",
             // Tabata
             "Tabata St.",
             // Nishi Nippori
             "Nishi Nippori St.",
             // Nippori
             "Nippori St.",
             // Uguisudani
             "Uguisudani???St.",
             // Ueno
             "Ueno St.",
             // Okachimachi
             "Okachimachi St.",
             // Akihabara
             "Akihabara St.",
             // Kanda
             "Kanda St."
         };
    [SerializeField]
    private MapRenderer _map = null;

    private bool _isActive;
    private void Awake()
    {
        Debug.Assert(_map != null);
    }

    public void TourStart()
    {
        _isActive = true;
        _mapPinProvider._mapPinLocationsCsv = _tourCSV;
        //Explanatory text. Tags are used because they need to be found across scenes.
        _descriptionTitle = GameObject.FindWithTag("DescriptTitle").GetComponent<TextMeshPro>();
        _descriptionText = GameObject.FindWithTag("DescriptMainText").GetComponent<TextMeshPro>();
        StartCoroutine(PinCreate());
        StartCoroutine(RunTour());
        
    }

    public void TourEnd()
    {
        _isActive = false;
        _mapLayer.enabled = false;
    }

    private IEnumerator PinCreate()
    {
        yield return new WaitForSeconds(11.0f);
        _mapPinProvider.PinAwake();
    }
    private IEnumerator RunTour()
    {
        yield return new WaitForSeconds(5.0f);

        while (_isActive) // loop the tour as long as we are running.
        {
            int i = 0;
            int i2 = MapScenesTitle.Count;
            foreach (var scene in MapScenes)
            {
                _descriptionTitle.text = MapScenesTitle[i];
                _descriptionText.text = MapScenesText[i];
                yield return _map.SetMapScene(scene);
                i++;
                yield return new WaitForSeconds(5.0f);
                if (i==i2)
                {
                    i = 0;
                }
                if (!_isActive)
                {
                    break;
                }
            }
        }
    }
}