using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class RestClient : MonoBehaviour
{
    // private List<ApplicationData> applicationList = new List<ApplicationData>();
    public GameObject buttonPrefab;
    public Transform panel;
    void Start()
    {
        // A correct website page.
        StartCoroutine(GetRequest("https://opendata.camden.gov.uk/resource/2eiu-s2cw.json"));

        // A non-existing page.
        StartCoroutine(GetRequest("https://error.html"));
    }

    // A coroutine is like a function that has the ability to pause execution and return control to Unity 
    // but then to continue where it left off on the following frame. 
    // It is essentially a function declared with a return type of I
    // Enumerator and with the yield return statement included 
    // somewhere in the body. The yield return null line is the point at which execution 
    // will pause and be resumed the following frame. To set a coroutine running, you need to use the 
    // StartCoroutine function.
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
                    string jsonResult = webRequest.downloadHandler.text;
                    Debug.Log(jsonResult);

                    // Pass the json to JsonHelper, and create ApplicationDataCollection object
                    // (ApplicationData object wrapped in {array: ... })
                    ApplicationData[] jsonArray = JsonHelper.getJsonArray<ApplicationData>(jsonResult);
                    
                    foreach (ApplicationData ad in jsonArray)
                    {
                        // ApplicationData loadedData = JsonUtility.FromJson<ApplicationData>(jsonResult);
                        
                        
                    }
                    
                }
            }
        }
    }
}
