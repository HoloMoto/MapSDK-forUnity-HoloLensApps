using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class DebugEventInEditor : MonoBehaviour
{

    [SerializeField] private UnityEvent _debugEvent;
    [SerializeField] private KeyCode _debugKey;
 

    // Update is called once per frame
    void Update()
    {
#if UNITY_EDITOR
        if (Input.GetKeyDown(_debugKey))
        {
            _debugEvent.Invoke();
        }   
#endif
    }
}
