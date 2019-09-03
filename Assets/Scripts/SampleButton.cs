using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SampleButton : MonoBehaviour
{
    public Button button;
    public Text title;
    public Text detail;

    private ApplicationData item;
    private ApplicationScrollList scrollList;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void Setup(ApplicationData currentItem, ApplicationScrollList currentScollList, GameObject detailPanel)
    {
        item = currentItem;
        title.text = item.development_address;
        detail.text = item.development_description;

        scrollList = currentScollList;

        button.onClick.AddListener(() => ButtonClicked(item, detailPanel));
    }

    public void ButtonClicked(ApplicationData currentItem, GameObject detailPanel)
    {
        detailPanel.SetActive(true);
        
        AppDetail detail = detailPanel.GetComponentInChildren<AppDetail>();
        detail.display(currentItem);
    }

}
