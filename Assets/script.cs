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
	int startY, startX; 
	int depotY, depotX;
	int gridLenX, gridLenY; 
	public AudioClip PlayMusic;
	int trainX ;
	int trainY;
	int boatX;
	int boatY;
	float overallTime;
	float minutes; 
	float hour;

	void Start () {
		
		turntime = 0; 
		timediff = 1.5f;
		planeX = startX; 
		startX= 0;
		planeY = startY;
		startY = 8; 
		planeY = 8;
		trainX = 15; 
		trainY  = 8;
		boatX = 0;
		boatY =0 ; 
		targetX = planeX;
		targetY = planeY; 
		planeCargo = 0 ;
		cargoMax = 90;
		cargoIncrease = 10;
		gridLenX = 16;
		gridLenY = 9; 
		CubeArray = new GameObject[gridLenX, gridLenY];
		depotX = 15;
		depotY = 0;
		overallTime = 0; 
			

		// 
		for (int y = 0; y < gridLenY  ; y ++){
			for (int i = 0; i < gridLenX  ; i++) {
				cubeposition = new Vector3 (i *2, y * 2, 0);
				CubeArray[i,y]= Instantiate (cubePre, cubeposition, Quaternion.identity);
				// assign the i and y values of the cube in the grid to the specific 
				//'Individual X' and 'Individual Y' that is distinctly attached to each cubes
				CubeArray [i, y].GetComponent<CubeController> ().IndividualX = i;  
				CubeArray [i, y].GetComponent<CubeController> ().IndividualY = y;
			}

		}
			
		CubeArray[startX, startY].GetComponent<Renderer> ().material.color = Color.red;
		CubeArray[trainX,trainY].GetComponent<Renderer> ().material.color = Color.green;
		CubeArray[boatX,boatY].GetComponent<Renderer> ().material.color = Color.blue;
		CubeArray [depotX, depotY].GetComponent<Renderer> ().material.color = Color.black;
		Activeplane = false;

		 	 
	}



	public void ProcessClick (GameObject clickedCube, int IndividualX , int IndividualY){

		//if we click the airplane, activate it 

		// if we click the activated airplane, deactivate it 
		
		// check if we clicked the plane and execute the following

		if (IndividualX == planeX && IndividualY == planeY) {

			if (Activeplane == false) {
				clickedCube.GetComponent<Renderer> ().material.color = Color.green;
				clickedCube.transform.localScale *= 1.5f;
				Activeplane = true;
			} else if (Activeplane == true) {
				clickedCube.GetComponent<Renderer> ().material.color = Color.red;
				clickedCube.transform.localScale /= 1.5f;
				Activeplane = false;
			}
			clickedCube.GetComponent<AudioSource>(). Play ();
		}

		// execute the following if I clicked on 
		 

		else if (Activeplane == true){
			clickedCube.GetComponent<Renderer> ().material.color = Color.red;

			targetX = IndividualX; 
			targetY = IndividualY;
		 
			 
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
	void MovePlane (){
		CalculateDirection ();
		if (Activeplane == true) {
			if (planeX == depotX && planeX == depotY) {
				CubeArray [depotX, depotY].GetComponent<Renderer> ().material.color = Color.black;
				CubeArray [depotX, depotY].transform.localScale /= 1.5f;
			} else {
				CubeArray [planeX , planeY].GetComponent<Renderer> ().material.color = Color.white;
				CubeArray [planeX , planeY].transform.localScale /= 1.5f;
			}

			planeX += moveX;
			planeY += moveY;
			CubeArray [depotX, depotY].GetComponent<Renderer> ().material.color = Color.black;

			if (planeX >= gridLenX) {
				planeX = gridLenX - 1;
			} else if (planeX < 0) {
				planeX = 0;
			}
			if (planeY >= gridLenY) {
				planeY = gridLenY - 1;
			} else if (planeY < 0) {
				planeY = 0;
			}
			CubeArray [planeX, planeY].GetComponent<Renderer> ().material.color = Color.green; 
			CubeArray [planeX, planeY].transform.localScale *= 1.5f;
		
		}

	}

	// Update is called once per frame
	void Update () {
		if (Time.time > turntime) {
 
			overallTime = Time.time; 
			float rounded = Mathf.Round(overallTime * 1.0f) / 1.0f ;
			if (rounded > 60) {
				minutes = rounded / 60; 
				minutes = Mathf.Round (rounded * 1.0f) / 1.0f; 
				rounded = 0; 	
				if (minutes > 60 ){
					hour = minutes / 60;
					hour = Mathf.Round (minutes * 1.0f) / 1.0f;  
					minutes = 0; 
					rounded = 0;

				}

			}  

			MovePlane (); 
			if (planeCargo < cargoMax) {
				planeCargo += cargoIncrease; 
			} else {
				planeCargo = 90; 
			}
			 
			if (planeX == depotX && planeY == depotY) {
				score += planeCargo;
				planeCargo = 0; 	
			}
			 
			UIText.text = "cargo: " + planeCargo + " score: " + score + " Time is: " + hour +" hour " + minutes +" minutes " + rounded + " seconds" ;
				//also displayed how much the score increase by 
				 

			turntime += timediff;
		}
		//display the amount of time that has been going ....therefore displaye Time.time but change the seconds to minutes and...change the the minutes to hour when >60 	
	}
		 
		

}
