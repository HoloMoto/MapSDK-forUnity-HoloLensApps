using System;
using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;
using UnityEngine.Events;
using TMPro;


    public class TextSclloler : MonoBehaviour
    {
        [SerializeField] TextMeshPro _OriginalText;
        [SerializeField,Header("OutPut")] private TextMeshPro _OutputText;

        
        [SerializeField] private bool _TextChanged;
        [SerializeField] private UnityEvent _pocessingEvent; 
        [SerializeField] private UnityEvent _endEvent;
        public  string st;
       public string _ChangedText;
        [SerializeField,Range(0.01f,1)] float _speed; 
        public  string subText;

        public string output;
        
        private void Start()
        {
            StartCoroutine("SentText");

        }

        IEnumerator SentText()
        {
            _TextChanged = true;
            int _textsize = _OriginalText.text.ToString().Length;
            subText = _OriginalText.text.ToString();
            int i = 0;
            while (i<_textsize)
            {
                _ChangedText += subText.Substring(i,  1).ToUpper(); //ToDoFixError
                st =subText.Remove(0, i+1);
                
                output = _ChangedText + st;
                _OutputText.text = output;
                _pocessingEvent.Invoke();
                yield return new WaitForSeconds(_speed);
               
                i++;
            }
            
            _TextChanged = false;
            _endEvent.Invoke();
        }

        public void SetColor()
        {
            Color col = new Color(1, 0, 0);
            Material mat = _OutputText.GetComponent<Renderer>().material;
            mat.SetColor("_FaceColor", col);
        }
    }    

