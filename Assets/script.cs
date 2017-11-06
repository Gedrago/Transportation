using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class script : MonoBehaviour {

	// Use this for initialization
	public GameObject cubePre; 
	new Vector3 cubeposition;
	public GameObject cubeSelected;
	GameObject airplane ; 
	GameObject myCube;
	public static int planex , planey;
	public GameObject[,] CubeArray; 
	bool Activeplane; 
	void Start () {

		planex = 15;
		planey = 0;
		CubeArray = new GameObject[16, 9];
		for (int y = 0; y < 9 ; y ++){
			for (int i = 0; i < 16; i++) {
				cubeposition = new Vector3 (i * -3 + 6, y * -2 + 10, 0);
				CubeArray[i,y]= Instantiate (cubePre, cubeposition, Quaternion.identity);
				CubeArray [i, y].GetComponent<CubeController> ().IndividualX = i;
				CubeArray [i, y].GetComponent<CubeController> ().IndividualY = y;
			}

		}


		CubeArray[15, 0].GetComponent<Renderer> ().material.color = Color.red;
		Activeplane = false;

		 	 
	}

	public void ProcessClick (GameObject clickedCube, int IndividualX , int IndividualY){

		//if we click the airplane, activate it 

		// if we click the activated airplane, deactivate it 
	
		 
		if( IndividualX == planex &&  IndividualY== planey){

			if (Activeplane == false){
				Activeplane = true;
				clickedCube.GetComponent<Renderer> ().material.color = Color.green;


			}
			else if (Activeplane == true){
				clickedCube.GetComponent<Renderer> ().material.color = Color.red;
				Activeplane = false;
			}
		}
		else {
			if (Activeplane == true){
				CubeArray [planex, planey].GetComponent<Renderer> ().material.color = Color.white;
				planex = IndividualX; 
				planey = IndividualY;


				CubeArray [planex, planey].GetComponent<Renderer> ().material.color = Color.green;
			}
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

}
