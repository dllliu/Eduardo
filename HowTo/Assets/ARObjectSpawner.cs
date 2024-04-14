using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARObjectSpawner : MonoBehaviour
{
    //private string[] states = { "Swimming", "Fast Run", "Dribble", "Burpee End", "Butterfly Twirl", "Frisbee Throw", "Hip Hop Dancing", "Baseball Strike", "Baseball Pitching", "Moonwalk" };
    private List<string> animationNames = new List<string>();
    private int length = 0;
    public Transform cursor;
    public GameObject gameobject_to_spawn;
    private Animator anim;

    void Start()
    {
        anim = gameobject_to_spawn.GetComponent<Animator>();
        if (anim != null)
        {
            RuntimeAnimatorController ac = anim.runtimeAnimatorController;
            length = ac.animationClips.Length;

            foreach (AnimationClip clip in ac.animationClips)
            {
                animationNames.Add(clip.name);
            }
        }
    }
    //public AudioClip spawn_sound_effect;
    // Start is called before the first frame update

    public void Spawn(string animation)
    {
        GameObject new_object = Instantiate(gameobject_to_spawn);
        ResetEval.setCount();
        new_object.transform.SetPositionAndRotation(cursor.position, cursor.rotation);

        anim = new_object.GetComponent<Animator>();
        anim.Play(animation, 0, 0f);

    }
}
