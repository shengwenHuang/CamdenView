using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadOnClick : MonoBehaviour
{
    [SerializeField]
    public GameObject loading;
    public void LoadScene(int view)
    {
        loading.SetActive(true);
        SceneManager.LoadScene(view);
    }
}
