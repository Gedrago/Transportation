using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class script : MonoBehaviour {

	// Use this for initialization

	public GameObject cubePre; 
	public Text UIText;
	new Vector3 cubeposition;
	public GameObject cubeSelected;
	GameObject airplane ; 
	GameObject myCube;
	public static int planeX , planeY;
	public GameObject[,] CubeArray; 
	bool Activeplane; 
	public float turntime; 
	public float timediff; 
	int cargoMax , planeCargo ,cargoIncrease, score;
	int targetX, targetY;  
	int moveY, moveX; 

	void Start () {
		turntime = 0; 
		timediff = 1.5f;
		planeX = 15;
		planeY = 0;
		targetX = planeX;
		targetY = planeY; 
		planeCargo = 0 ;
		cargoMax = 90;
		cargoIncrease = 10;
		CubeArray = new GameObject[16, 9];
		// 
		for (int y = 0; y < 9 ; y ++){
			for (int i = 0; i < 16; i++) {
				cubeposition = new Vector3 (i * -3 + 6, y * -2 + 10, 0);
				CubeArray[i,y]= Instantiate (cubePre, cubeposition, Quaternion.identity);
				// assign the i and y values of the cube in the grid to the specific 
				//'Individual X' and 'Individual Y' that is distinctly attached to each cubes
				CubeArray [i, y].GetComponent<CubeController> ().IndividualX = i;  
				CubeArray [i, y].GetComponent<CubeController> ().IndividualY = y;
			}

		}
			
		CubeArray[15, 0].GetComponent<Renderer> ().material.color = Color.red;
		CubeArray [0, 8].GetComponent<Renderer> ().material.color = Color.black;
		Activeplane = false;

		 	 
	}

	public void ProcessClick (GameObject clickedCube, int IndividualX , int IndividualY){

		//if we click the airplane, activate it 

		// if we click the activated airplane, deactivate it 
		
		// check if we clicked the plane and execute the following  
		if (IndividualX == planeX && IndividualY == planeY) {

			if (Activeplane == false) {
				clickedCube.GetComponent<Renderer> ().material.color = Color.green;
				Activeplane = true;
			} else if (Activeplane == true) {
				clickedCube.GetComponent<Renderer> ().material.color = Color.red;
				Activeplane = false;
			}
		}

		// execute the following if I clicked on 
		else if (IndividualX == 0 && IndividualY == 8) {
			CubeArray [0, 8].GetComponent<Renderer> ().material.color = Color.black;
		}

		if (Activeplane == true){

			CubeArray [planeX, planeY].GetComponent<Renderer> ().material.color = Color.white;
			CubeArray [0, 8].GetComponent<Renderer> ().material.color = Color.black;

			planeX = IndividualX; 
			planeY = IndividualY;

			CubeArray [planeX, planeY].GetComponent<Renderer> ().material.color = Color.green;
		} 
	}
	//walkthrough 
	void CalculateDirection( ){
		if (planeY > targetY) {
		moveY = -1; 
		} else if (planeY < targetY){
			moveY = 1;
		} else {
			moveY = 0 ;
		}
		if (planeX < targetX){
		moveX = 1; 
		} 
		else if (planeX > targetX){
		moveX = -1; 
		}
		else {
			moveX = 0; 
		}
}
		void movePlane(){
			CalculateDirection ();

		}

	// Update is called once per frame
	void Update () {
		if (Time.time > turntime) {
			if (planeCargo < cargoMax) {
				planeCargo += cargoIncrease; 
			} else {
				planeCargo = 90; 
			}
			 
			if (planeX == 0 && planeY == 8) {
				score += planeCargo;
				planeCargo = 0; 	
			}
			 
				UIText.text = "cargo: " + planeCargo + " score: " + score ;
				 

			turntime += timediff;
		}
			
	}
		 
		

}
