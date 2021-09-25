using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions;
using Microsoft.MixedReality.Toolkit.SceneSystem;
using UnityEngine.SceneManagement;
using TMPro;

public class MapsSceneManager : MonoBehaviour
{
    
    [SerializeField] TextMeshPro _StatiusText;
    [SerializeField] GameObject _DescriptionBoard;
    [SerializeField] Renderer targetRenderer;
    private bool _isFirstTime;
    [SerializeField] LoadSceneMode loadSceneMode = LoadSceneMode.Single;
    [SerializeField] string contentName;
    
    /// <summary>
    /// True if the device is connected to the network in the app.
    /// True will be returned in the editor.
    /// </summary>
    public bool _hasNetwark;

    [Header("Button")] public GameObject _MyLocationButton;
    //Debug
    [SerializeField] private bool _notConectInternet;
    
    void Start()
    {
        _isFirstTime = true;
        //Get network status when app starts
        if (Application.internetReachability == NetworkReachability.NotReachable ||_notConectInternet)
            _StatiusText.text = "No Internet connection. \n Connect to the Internet.";
        if (Application.internetReachability == NetworkReachability.ReachableViaCarrierDataNetwork)
        {
            _StatiusText.text = "Conected Internet";
            _hasNetwark = true;
            TitleScene();
        }
#if  UNITY_EDITOR
        _hasNetwark = true;
#endif
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

    //TODO The introduction of MRTK with MRFeaturesTools has caused a problem where SceneSystem cannot be used.
    //We have filed a bug report to MRTK for this issue as Issue #10199 and it is not available now.
    public void LoadContent()
    {
        if (CoreServices.SceneSystem.SceneOperationInProgress)
            return;

        ISceneTransitionService transitions = MixedRealityToolkit.Instance.GetService<ISceneTransitionService>();
        transitions.DoSceneTransition(
            () => CoreServices.SceneSystem.LoadContent(contentName, loadSceneMode));
    }

    
    string[] _nowOpenScenes;
    /// <summary>
    /// Since MRTK's SceneSystem cannot be used, implement your own scene transitions.
    /// </summary>
    public void LoadScene(string _sceneName)
    {
        //Get the list of currently open scenes.
        _nowOpenScenes = new string[UnityEngine.SceneManagement.SceneManager.sceneCount];
        for (int i = 0; i < UnityEngine.SceneManagement.SceneManager.sceneCount ; i++) {
            string _OpensceneName = UnityEngine.SceneManagement.SceneManager.GetSceneAt(i).name;
            _nowOpenScenes[i] = _OpensceneName;
        }
        //If the selected scene is not open, load it.
        if (Array.IndexOf(_nowOpenScenes,_sceneName,0) == -1)
        {
            SceneManager.LoadScene(_sceneName,loadSceneMode);
        }
        //If the scene is already open, do nothing.
        if (Array.IndexOf(_nowOpenScenes,_sceneName,0) >= 1)
        {

        }
    }

    void TitleScene()
    {
        
        Instantiate(_MyLocationButton);
    }
}
