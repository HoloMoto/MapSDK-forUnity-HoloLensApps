using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;

public class TestMaterialColorChanger : MonoBehaviour
{
    [SerializeField] Material _mat;

    [SerializeField] private Color color;
    // Start is called before the first frame update
    void Start()
    {
        _mat.SetColor("_BaseMap",color);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
