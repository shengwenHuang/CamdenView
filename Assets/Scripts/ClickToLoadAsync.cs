// this code came from Unity Learn tutorial 
// https://learn.unity.com/tutorial/live-sessions-on-ui#5c7f8528edbc2a002053b4b3
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ClickToLoadAsync : MonoBehaviour
{
    public Slider loadingBar; //progress bar
    public GameObject loadingImage; //background when load

    private AsyncOperation async;

    public void ClickAsync(int level)
    {
        loadingImage.SetActive(true); //show the background
        StartCoroutine(LoadLevelWithBar(level));
    }

    IEnumerator LoadLevelWithBar(int level)
    {
        async = SceneManager.LoadSceneAsync(level);
        while (!async.isDone)
        {
            loadingBar.value = async.progress;
            yield return null;
        }
    }
}
