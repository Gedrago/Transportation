using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioPlay : MonoBehaviour {
	 
	public AudioSource PlayMusic;
	// Use this for initialization
	void Start () {
		PlayMusic = GetComponent<AudioSource> ();

	}
	
	// Update is called once per frame
	void Update () {
		
	}
	void OnMouseDown(){
		PlayMusic.PlayOneShot (PlayMusic.clip);
	}
}
