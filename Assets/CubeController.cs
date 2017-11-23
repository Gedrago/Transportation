using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeController : MonoBehaviour {
	
	script scriptReference ;
	public int IndividualX, IndividualY ; 
	int startX ;
	int startY ; 
	int depotX ;
	int depotY ;
	 
 


	// Use this for initialization
	void Start () {
		startX= 0;
		startY = 8; 
		depotX = 15;
		depotY = 0;
		scriptReference = GameObject.Find ("Controller").GetComponent<script> ();
 
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnMouseDown (){
		
		scriptReference.ProcessClick (gameObject, IndividualX , IndividualY);

		 
	}
	void OnMouseOver ( ){
		// when the mouse hovers over, make the cube do something .. probably change color increase in size 
		gameObject.GetComponent<Renderer> ().material.color = new Color(0,1,2);
		 

	}
	void OnMouseExit( ) {
		//Reset the color of the GameObject back to normal
		if (IndividualX == startX && IndividualY == startY) {
			gameObject.GetComponent<Renderer> ().material.color = Color.red;
		} 
		else if (IndividualX == depotX && IndividualY == depotY) {
			gameObject.GetComponent<Renderer> ().material.color = Color.black;
		} 
		else {
			gameObject.GetComponent<Renderer> ().material.color = Color.white;
		}
		 
	}

}
