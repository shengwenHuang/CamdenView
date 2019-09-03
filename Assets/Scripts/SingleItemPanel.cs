using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SingleItemPanel : MonoBehaviour
{
    public Button backButton;
    public GameObject detailPanel;
    public Button ARview;

    // Start is called before the first frame update
    void Start()
    {
        SetButton();
    }


    public void SetButton()
    {
    	backButton.onClick.AddListener(() => BackClicked());
    }

    public void setLocation(Vector2 coord)
    {
    	ARview.onClick.AddListener(() => ARClicked(coord));
    }

    public void BackClicked()
    {
    	detailPanel.SetActive(false); // hide the panel when click back
    }

    public void ARClicked(Vector2 coord)
    {
    	// ClickToLoadAsyncNoImage.ClickAsyncSceneName("DragAndDrop-house02")
    }
}
