using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class script : MonoBehaviour {

	// Use this for initialization
	public GameObject cubePre; 
	new Vector3 cubeposition;
	public static GameObject cubeSelected;
	GameObject airplane ; 
	GameObject myCube;
	public static int ax , ay;
	void Start () {

		ax = 15;
		ay = 0;

		for (int y = 0; y < 9 ; y ++){
			for (int i = 0; i < 16; i++) {
				cubeposition = new Vector3 (i * -3 + 6, y * -2 + 10, 0);
				myCube = Instantiate (cubePre, cubeposition, Quaternion.identity);
				myCube.GetComponent<CubeController> ().j = i ; 
				myCube.GetComponent<CubeController> ().k = y ;
				 
				if (i == ax && y == ay) {
					myCube.GetComponent<Renderer> ().material.color = Color.red; 

				}

			}

				
		}


		 
	}

	public static void ProcessClick (GameObject clickedCube, int j, int k){

		//if we click the airplane, activate it 

		// if we click the activated airplane, deactivate it 
	
		if ( cubeSelected != null) {
			 cubeSelected.GetComponent<Renderer> ().material.color = Color.white;
		}
		else if(j == ax && k == ay){
			clickedCube.GetComponent<Renderer> ().material.color = Color.yellow;  

		}

		clickedCube.GetComponent<Renderer> ().material.color = Color.red;
		cubeSelected = clickedCube; 

	
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	 

}
