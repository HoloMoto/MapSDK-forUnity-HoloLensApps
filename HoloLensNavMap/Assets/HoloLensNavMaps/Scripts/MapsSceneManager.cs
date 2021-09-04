using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class MapsSceneManager : MonoBehaviour
{

    [SerializeField] TextMeshPro _StatiusText;
    [SerializeField] GameObject _DescriptionBoard;
    [SerializeField] Renderer targetRenderer;
    private bool _isFirstTime;

    ///Debug
    [SerializeField] private bool _notConectInternet;

    void Start()
    {
        _isFirstTime = true;
        //Get network status when app starts
        if (Application.internetReachability == NetworkReachability.NotReachable ||_notConectInternet)
            _StatiusText.text = "No Internet connection. \n Connect to the Internet.";
        
    }

    // Update is called once per frame
    void Update()
    {
        //An animation is triggered when a user looks at the description board.
        if (targetRenderer.isVisible && _isFirstTime)
        {
            _DescriptionBoard.GetComponent<Animator>().enabled = true;
            _isFirstTime = false;
        }
    }
  
}
