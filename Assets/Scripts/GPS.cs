using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GPS : MonoBehaviour
{
    
    public static Vector2 coordinate;

    void Start()
    {
    	// StartCoroutine(StartGPS());
    }

    public static IEnumerator StartGPS()
    {
        // First, check if user has location service enabled
        if (!Input.location.isEnabledByUser)
        {
        	print(Input.location.isEnabledByUser + "not enabled");
            // yield break;
        }

        // Start service before querying location
        Input.location.Start(1);

        // Wait until service initializes
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }
        // Service didn't initialize in 20 seconds
        if (maxWait < 1)
        {
            print("Timed out");
            yield break;
        }

        // Connection has failed
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            print("Unable to determine device location");
            yield break;
        }
        else
        {
            // Access granted and location value could be retrieved
            print("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);
            Debug.Log("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);
            coordinate = new Vector2(Input.location.lastData.latitude, Input.location.lastData.longitude);
            // yield return coordinate;
        }

    }

// this function is modified from
// http://wirebeings.com/markerless-gps-ar.html
    public static float CalcDistance(float lat1, float lon1, float lat2, float lon2)
	{

		var R = 6378.137; // Radius of earth in KM
		var dLat = lat2 * Mathf.PI / 180 - lat1 * Mathf.PI / 180;
		var dLon = lon2 * Mathf.PI / 180 - lon1 * Mathf.PI / 180;
		float a = Mathf.Sin(dLat / 2) * Mathf.Sin(dLat / 2) +
		Mathf.Cos(lat1 * Mathf.PI / 180) * Mathf.Cos(lat2 * Mathf.PI / 180) *
		Mathf.Sin(dLon / 2) * Mathf.Sin(dLon / 2);
		var c = 2 * Mathf.Atan2(Mathf.Sqrt(a), Mathf.Sqrt(1 - a));
		double distance = R * c;
		distance = distance * 1000f; // meters
		//convert distance from double to float
		float distanceFloat = (float)distance;
		return distanceFloat;
	}

}
