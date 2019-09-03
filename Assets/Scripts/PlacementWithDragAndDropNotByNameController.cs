using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

[RequireComponent(typeof(ARRaycastManager))]
public class PlacementWithDragAndDropNotByNameController : MonoBehaviour
{
    [SerializeField]
    private GameObject placedPrefab;

    [SerializeField]
    private GameObject welcomePanel;

    [SerializeField]
    private Button dismissButton;

    [SerializeField]
    private Camera arCamera;

    private GameObject placedObject;

    private Vector2 touchPosition = default;

    private ARRaycastManager arRaycastManager;

    private PlacementObject placementObject;

    private bool onTouchHold = false;

    private bool placedAlready = false;

    private static List<ARRaycastHit> hits = new List<ARRaycastHit>();

    private GameObject PlacedPrefab 
    {
        get 
        {
            return placedPrefab;
        }
        set 
        {
            placedPrefab = value;
        }
    }
    
    void Awake() 
    {
        arRaycastManager = GetComponent<ARRaycastManager>();
        dismissButton.onClick.AddListener(Dismiss);
    }
    private void Dismiss() => welcomePanel.SetActive(false);

    void Start()
    {
        StartCoroutine(GPS.StartGPS());
    }

    void Update()
    {
        // do not capture events unless the welcome panel is hidden
        if(welcomePanel.activeSelf)
            return;

        if(Input.touchCount > 0)
        {
            print("touch");
            Touch touch = Input.GetTouch(0);
            
            touchPosition = touch.position;

            if(touch.phase == TouchPhase.Began)
            {
                print("begin");
                Ray ray = arCamera.ScreenPointToRay(touch.position);
                RaycastHit hitObject;
                if(Physics.Raycast(ray, out hitObject))
                {
                    placementObject = hitObject.transform.GetComponent<PlacementObject>();
                    print(placementObject);
                    print("raycast");
                }
                if(arRaycastManager.Raycast(touchPosition, hits, UnityEngine.XR.ARSubsystems.TrackableType.PlaneWithinPolygon))
                {
                    print("ar ray begin");
                    Pose hitPose = hits[0].pose;

                    if(placementObject == null && !placedAlready)
                    {
                        // if not yet created
                        placementObject = Instantiate(placedPrefab, hitPose.position, hitPose.rotation).GetComponent<PlacementObject>();
                        placedAlready = true;
                        print("initiate");
                    }
                }
            }

            if(touch.phase == TouchPhase.Ended)
            {
                onTouchHold = false;
                print("not hold");
            }

            if(touch.phase == TouchPhase.Moved)
            {
                // Ray ray = arCamera.ScreenPointToRay(touch.position);
                // RaycastHit hitObject;
                // if(Physics.Raycast(ray, out hitObject))
                // {
                //     placementObject = hitObject.transform.GetComponent<PlacementObject>();
                //     print(placementObject);
                //     print("raycast move");
                // }
                if(arRaycastManager.Raycast(touchPosition, hits, UnityEngine.XR.ARSubsystems.TrackableType.PlaneWithinPolygon))
                {
                    // created and attemp to drag it
                    print("ar ray");
                    Pose hitPose = hits[0].pose;
                    if(placementObject != null)
                    {
                        placementObject.transform.position = hitPose.position;
                        placementObject.transform.rotation = hitPose.rotation;
                        print("move");
                    }
                }
            }
        }

        
    }
}
