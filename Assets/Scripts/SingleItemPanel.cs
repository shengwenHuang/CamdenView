using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SingleItemPanel : MonoBehaviour
{
    public Button backButton;
    public GameObject detailPanel;
    public Button ARview;

    private float propertyLat;
    private float propertyLong;

    // Start is called before the first frame update
    void Start()
    {
        SetButton();
    }

    void Update()
    {
    	checkLocation();
    }


    public void SetButton()
    {
    	backButton.onClick.AddListener(() => BackClicked());
    }

    public void setCoord(float lat, float longi)
    {
    	propertyLat = lat;
    	propertyLong = longi;
    }

    public void checkLocation()
    {
    	float distance = GPS.CalcDistance((float)GPS.coordinate.x, (float)GPS.coordinate.y, propertyLat, propertyLong);
    	print(distance);
    	if (distance > 20)
    	{
    		ARview.interactable = false;
    	}
    }

    public void BackClicked()
    {
    	detailPanel.SetActive(false); // hide the panel when click back
    }

}
