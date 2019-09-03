using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ClickToLoadAsyncNoImage : MonoBehaviour
{
    private AsyncOperation async;

    public void ClickAsyncSceneName(string name)
    {
        // StartCoroutine(LoadLevelWithBarName(name, coord));
    }


    IEnumerator LoadLevelWithBarName(string name)
    {
        async = SceneManager.LoadSceneAsync(name);
        // AppDetail.display(currentItem);
        while (!async.isDone)
        {
            yield return null;
        }
    }
}
