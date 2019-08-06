using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.IO;

// [System.Serializable]
// public class Item
// {
//     public string itemTitle;
//     public string itemDetail;
// }

public class ApplicationScrollList : MonoBehaviour
{
    // public List<Item> itemList;
    public Transform contentPanel;
    public ObjectPool buttonObjectPool; 

    // Start is called before the first frame update
    void Start()
    {
        // A correct website page.
        StartCoroutine(GetRequest("https://opendata.camden.gov.uk/resource/2eiu-s2cw.json"));

        // A non-existing page.
        StartCoroutine(GetRequest("https://error.html"));
        // RefreshDisplay();
    }

    public void RefreshDisplay()
    {
        // AddButtons(applicationItem);
    }

    private void AddButtons(ApplicationData applicationItem)
    {
        ApplicationData item = applicationItem;
        GameObject newButton = buttonObjectPool.GetObject();
        newButton.transform.SetParent(contentPanel, false);

        SampleButton sampleButton = newButton.GetComponent<SampleButton>();
        sampleButton.Setup(item, this);
        
        // for (int i = 0; i < itemList.Count; i++)
        // {
        //     Item item = itemList[i];
        //     GameObject newButton = buttonObjectPool.GetObject();
        //     newButton.transform.SetParent(contentPanel, false);

        //     SampleButton sampleButton = newButton.GetComponent<SampleButton>();
        //     sampleButton.Setup(item, this);
        // }
    }

    IEnumerator GetRequest(string uri)
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(uri))
        {
            // Request and wait for the desired page.
            yield return webRequest.SendWebRequest();

            string[] pages = uri.Split('/');
            int page = pages.Length - 1;

            if (webRequest.isNetworkError)
            {
                Debug.Log(pages[page] + ": Error: " + webRequest.error);
            }
            else
            {
                Debug.Log(pages[page] + ":\nReceived: " + webRequest.downloadHandler.text);
                if (webRequest.isDone)
                {
                    // string jsonResult = webRequest.downloadHandler.text;
                    // Debug.Log(jsonResult);

                    string filePath = "/Users/xenialice/Documents/PlanningAR0724/Assets/Scripts/jsonText.txt";
                    string jsonResult;
                    if(File.Exists(filePath))
                    {
                        jsonResult = File.ReadAllText(filePath);
                    }
                    else
                    {
                        jsonResult = "";
                    }
                    Debug.Log("jsonResult" + jsonResult);
                    

                    // Pass the json to JsonHelper, and create ApplicationDataCollection object
                    // (ApplicationData object wrapped in {array: ... })
                    ApplicationData[] jsonArray = JsonHelper.getJsonArray<ApplicationData>(jsonResult);
                    
                    foreach (ApplicationData ad in jsonArray)
                    {
                        // ApplicationData loadedData = JsonUtility.FromJson<ApplicationData>(jsonResult);
                        AddButtons(ad);
                        
                    }
                    
                }
            }
        }
    }
}
