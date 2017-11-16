using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeController : MonoBehaviour {
	
	script scriptReference ;
	public int IndividualX, IndividualY ; 
 
	 
 


	// Use this for initialization
	void Start () {
 
		scriptReference = GameObject.Find ("Controller").GetComponent<script> ();
 
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnMouseDown (){
 
		scriptReference.ProcessClick (gameObject, IndividualX , IndividualY);

	}

}
