using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Maps.Unity;
using Microsoft.Geospatial;

public class YamanoteTour : MonoBehaviour
{
 private static readonly List<MapScene> MapScenes =
        new List<MapScene>
        {
            // TokyoStation -> Yurakucho
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.681382, 139.76608399999998), 17.0f),
            // Yurakucho->shinbashi
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.675069, 139.763328), 17.0f),
            // Shinbashi
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.665498	, 139.75964), 16.0f),
            // Hamamatucho
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.655646, 139.756749), 16.0f),
            // Tamachi
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.645736	, 139.74757499999998), 16.75f),
            // TakanawaGateway
            // Shinagawa
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.630152, 139.74044000000004), 16.0f),
            // Osaki
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.6197, 	139.72855300000003), 17.0f),
            // Gotanda
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.626446, 139.72344399999997), 18.5f),
            // Meguro
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.633998	, 139.715828), 19.5f),
            // Ebisu
            new MapSceneOfLocationAndZoomLevel(new LatLon(	35.64669, 139.710106), 19.5f),
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
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.736489,	139.74687500000005),17f),
            // Tabata
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.738062	,139.76085999999998),17f),
            // Nishi Nippori
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.732135,	139.76678700000002),17f),
            // Nippori
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.727772	,139.770987),17f),
            // Uguisudani
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.720495	,139.77883700000007),17f),
            // Ueno
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.713768,	139.77725399999997),17f),
            // Okachimachi
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.707438	,139.774632),17f),
            // Akihabara
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.698683	,139.77421900000002),17f),
            // Kanda
            new MapSceneOfLocationAndZoomLevel(new LatLon(35.69169	,139.77088300000003),17f)
        };

    [SerializeField]
    private MapRenderer _map = null;

    private void Awake()
    {
        Debug.Assert(_map != null);
    }

    void Start()
    {
        StartCoroutine(RunTour());
    }

    private IEnumerator RunTour()
    {
        yield return new WaitForSeconds(5.0f);

        while (isActiveAndEnabled) // loop the tour as long as we are running.
        {
            foreach (var scene in MapScenes)
            {
                yield return _map.SetMapScene(scene);

                yield return new WaitForSeconds(3.0f);
            }
        }
    }
}
