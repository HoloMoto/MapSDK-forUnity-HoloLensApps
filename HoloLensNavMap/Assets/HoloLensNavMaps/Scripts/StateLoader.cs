using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
public class StateLoader : MonoBehaviour
{ 
    
    [SerializeField]
    TextAsset csvFile;

    public List<string> Name;
    public List<string> URL;
    List<string[]> csvDatas = new List<string[]>();
    
    // Start is called before the first frame update
    void Start()
    {
        SetCSVDeta("");
    }

    public void SetCSVDeta(string csvName)
    {
        
        if (csvName !="")
        {
           Debug.Log("");
        }
        else
        {
            int i=0;
            StringReader reader = new StringReader(csvFile.text);
            while (reader.Peek() != -1) // reader.Peaekが-1になるまで
            {
                string line = reader.ReadLine(); // 一行ずつ読み込み
                csvDatas.Add(line.Split(',')); // , 区切りでリストに追加
                 Name.Add(csvDatas[i][0]);  //StateName
                 URL.Add(csvDatas[i][3]);  //StateWebSiteURL
                i++;
            }

            
            Debug.Log(csvDatas[1][2]);
        }
    
    } 
}
