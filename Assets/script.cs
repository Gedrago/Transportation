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
	public static int planex , planey;
	public GameObject[,] CubeArray; 
	bool Activeplane; 
	public float turntime; 
	public float timediff; 
	int cargoMax , planeCargo ,cargoIncrease, score  ;
	 

	void Start () {
		turntime = 0; 
		timediff = 1.5f;
		planex = 15;
		planey = 0;
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
		if( IndividualX == planex &&  IndividualY== planey){

			if (Activeplane == false){
				clickedCube.GetComponent<Renderer> ().material.color = Color.green;
				Activeplane = true;
			}
			else if (Activeplane == true){
				clickedCube.GetComponent<Renderer> ().material.color = Color.red;
				Activeplane = false;
			}
		}

		// execute the following if I clicked on 
		else if(IndividualX == 0 && IndividualY == 8) {
			CubeArray [0, 8].GetComponent<Renderer> ().material.color = Color.black;
		} 
			if (Activeplane == true){
				
					CubeArray [planex, planey].GetComponent<Renderer> ().material.color = Color.white;
					CubeArray [0, 8].GetComponent<Renderer> ().material.color = Color.black;
		
					planex = IndividualX; 
					planey = IndividualY;

					CubeArray [planex, planey].GetComponent<Renderer> ().material.color = Color.green;
			} 
	}
		

	// Update is called once per frame
	void Update () {
		if (Time.time > turntime) {
			if (planeCargo < cargoMax) {
				planeCargo += cargoIncrease; 
			} else {
				planeCargo = 90; 
			}
			 
			if (planex == 0 && planey == 8) {
				score += planeCargo;
				planeCargo = 0; 	
			}
			 
				UIText.text = "cargo: " + planeCargo + " score: " + score ;
				 
			 
		
		 

			turntime += timediff;
		}
			
	}
		//when it is the turn, the mover should gain a cargo 
		//then the airplane gains 10 points of cargo '

		

}
