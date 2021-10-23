using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TokyoSceneManager : MonoBehaviour
{
    [SerializeField] private GameObject _handMenu;
    [SerializeField] private GameObject TourObject;
    // Start is called before the first frame update
    void Start()
    {
        _handMenu.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
