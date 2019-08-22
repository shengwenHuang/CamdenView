using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SingleItemPanel : MonoBehaviour
{
    public Button backButton;
    public GameObject detailPanel;

    // Start is called before the first frame update
    void Start()
    {
        SetButton();
    }


    public void SetButton()
    {
    	backButton.onClick.AddListener(() => BackClicked());
    }

    public void BackClicked()
    {
    	detailPanel.SetActive(false); // hide the panel when click back
    }
}
