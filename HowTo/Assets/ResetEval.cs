using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetEval : MonoBehaviour
{
    // Start is called before the first frame update

    // Update is called once per frame
    static int count = 0;
    public GameObject button;

    public static void setCount()
    {
        count++;
    }
    void Start()
    {
        button.SetActive(false);
    }
    void Update()
    {
        if (count > 0)
        {
            button.SetActive(true);
        }
        else
        {
            button.SetActive(false);
        }

    }

    public void resetScene()
    {
        GameObject[] avatars = GameObject.FindGameObjectsWithTag("Avatar");
        foreach (GameObject avatar in avatars)
        {
            Destroy(avatar);
        }
        count = 0;
    }
}
