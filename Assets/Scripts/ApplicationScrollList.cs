// this code is modified from Unity Learn tutorial
// https://learn.unity.com/tutorial/live-training-shop-ui-with-runtime-scroll-lists/?tab=overview
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.IO;


public class ApplicationScrollList : MonoBehaviour
{
    // public List<Item> itemList;
    public Transform contentPanel;
    public ObjectPool buttonObjectPool; 
    public GameObject detailPanel;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(StartRunningGPS());
    }

    IEnumerator StartRunningGPS()
    {
    	// waits for GPS to terminate
        yield return StartCoroutine(GPS.StartGPS());
        string app_token = "?$$app_token=kSjpRfdeqdvpZ7fyhJeP0spe1";
        // string query = "?$where=within_circle(location, " + GPS.coordinate.x + ", " + GPS.coordinate.y + ", 2000)";
        // string query = "?$where=within_circle(location, 51.552600, -0.112462, 2000)";
        string query = "&$order=DISTANCE_IN_METERS(location, 'POINT(" + GPS.coordinate.y + " " + GPS.coordinate.x + ")')ASC";
        // string query = "&$order=DISTANCE_IN_METERS(location, 'POINT(-0.112462 51.552600)')ASC";
        string url = "https://opendata.camden.gov.uk/resource/2eiu-s2cw.json" + app_token + query;
        Debug.Log(url);
        StartCoroutine(GetRequest(url));

        // A non-existing page.
        StartCoroutine(GetRequest("https://error.html"));
    }

    private void AddButtons(ApplicationData applicationItem)
    {
        ApplicationData item = applicationItem;
        GameObject newButton = buttonObjectPool.GetObject();
        newButton.transform.SetParent(contentPanel, false);

        SampleButton sampleButton = newButton.GetComponent<SampleButton>();
        sampleButton.Setup(item, this, detailPanel);
        
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
                    string jsonResult = webRequest.downloadHandler.text;
                    Debug.Log(jsonResult);
                    

                    // Pass the json to JsonHelper, and create ApplicationDataCollection object
                    // (ApplicationData object wrapped in {array: ... })
                    ApplicationData[] jsonArray = JsonHelper.getJsonArray<ApplicationData>(jsonResult);
                    
                    foreach (ApplicationData ad in jsonArray)
                    {
                        AddButtons(ad);
                        
                    }
                    
                }
            }
        }
    }
}
