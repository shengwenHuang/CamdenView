using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AppDetail : MonoBehaviour
{
    public Text title;

    public Text realAddress;

    public Text realDescription;

    public Text realDate;

    public Text realDecisionDate;

    public Text realType;

    public Text realStatus;

    public Text url;

    private ApplicationData item;
    

    public void display(ApplicationData currentItem)
    {
    	item = currentItem;
    	title.text = item.application_number;
    	realAddress.text = item.development_address;
    	realDescription.text = item.development_description;
    	realDate.text = item.registered_date;
    	realDecisionDate.text = item.decision_date;
    	realType.text = item.application_type;
    	realStatus.text = item.system_status;
    	url.text = item.full_application.url;
    }
}
