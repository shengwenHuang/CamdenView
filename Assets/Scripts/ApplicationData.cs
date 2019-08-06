using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[System.Serializable]
public class ApplicationData
{
    public int pk;
    public string application_number;
    public string development_address;
    public string development_description;

    public string decision_type;

    public string valid_from_date;

    public string registered_date;

    public string registered_in_last_7_working_days;

    public string registered_in_last_28_working_days;

    public string decision_date;

    public string decison_level;

    public string system_status;

    public string system_status_change_date;

    public string applicant_name ;
    public string ward;

    public string conservation_areas;

    public string case_officer;

    public string case_officer_team;

    public string responsibility_type;

    public string comment;

    public Url full_application;

    [System.Serializable]
    public class Url
    {
        public string url;
    }

    public string application_type;

    public int easting;

    public int northing;

    public string longitude;

    public string latitude;

    public string spatial_accuracy;

    public string last_uploaded;

    public Location location;

    [System.Serializable]
    public class Location
    {
        public string latitude;
        public string longitude;
        public HumanAddress human_address;

        public class HumanAddress
        {
            public string address;
            public string city;
            public string state;
            public string zip;
        }
    }

    public int socrata_id;

    public Url organisation_uri;

    public int computed_region_hxwp_gyfc;

    public int computed_region_6i9a_26nj;
}
