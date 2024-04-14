using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Animation : MonoBehaviour
{
    private Animator anim;
    private int id = 0;
    //private string[] states = { "Swimming", "Fast Run", "Dribble", "Burpee End", "Butterfly Twirl", "Frisbee Throw", "Hip Hop Dancing", "Baseball Strike", "Baseball Pitching", "Moonwalk" };
    private List<string> animationNames = new List<string>();
    private int length = 0;

    void Start()
    {
        anim = GetComponent<Animator>();
        if (anim != null)
        {
            RuntimeAnimatorController ac = anim.runtimeAnimatorController;
            length = ac.animationClips.Length; 

            foreach (AnimationClip clip in ac.animationClips)
            {
                animationNames.Add(clip.name);
            }

            // Print the names to the console
            //string str = "[";
            //foreach (string name in animationNames)
            //{
              //  str += name + ",";
            //}
            //Debug.Log(str);
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if (anim != null)
            {
                id += 1;
                if (id == length)
                {
                    id = 0;
                }
                anim.Play("Base Layer."+get_relevant_animation(), 0, 0f);
                Debug.Log(id);
                Debug.Log(get_relevant_animation());
            }
        }
    }

    public void PlayAnimation(string animationName)
    {
        if (anim != null)
        {
            // Play the animation immediately without any transitions
            anim.Play(animationName, 0, 0f);
        }
        else
        {
            Debug.LogError("Animator component not found on the GameObject.");
        }
    }

    string get_relevant_animation()
    {
        return animationNames[id];
    }
}