#pragma once
/*	Cylinder is a subclass for 3 dimensional cylinder shapes that is inherited from the ThreeDimensions class
			which inherits from the Geometry superclass. Example of multi-level inheritence.
		*/
class Cylinder : public ThreeDimensions {
public:	//Public access specifier is used to make the variables and the methods accessible outside the class.
	int Faces = 3;			//Inherited Faces variable is set to 3 as the cylinder has 3 faces. Example of polymorphism.
	int Edges = 2;			//Inherited Edges variable is set to 2 as the cylinder has 2 edges. Example of polymorphism.
	int Corners = 0;		//Inherited Corners variable is set to 0 as the cylinder has no corners. Example of polymorphism.
	int BaseRadius, Height;	//Variables of type int to store the radius length value of the base and the height value of the cylinder.

	Cylinder(int baseRadius, int height) {	//Constructor for Cylinder class that takes two integer variables as arguments.
		BaseRadius = baseRadius;	//Sets BaseRadius to the first variable that was given during initialization.
		Height = height;			//Sets Height to the second variable that was given during initialization.
	}

	void CalculateVolume() {	//Re-defining the inherited CalculateVolume function for Cylinder objects. Example of polymorphism.
		double Volume = (PI * pow(BaseRadius, 2)) * Height;		//Calculates the volume of a cylinder from its base radius length and height and stores it.
		cout << "Volume of cylinder with base radius length " << BaseRadius << " and height " << Height << ": " << Volume << " cm^3\n";	//Print outs the calculated volume value to the terminal.
	}

	void CalculateArea() {		//Re-defining the inherited CalculateArea function for Cylinder objects. Example of polymorphism.
		double Area = (2.0 * PI * pow(BaseRadius, 2)) + (Height * 2.0 * PI * BaseRadius);	//Calculates the surface area of a cylinder from its base radius length and height and stores it.
		cout << "Surface area of cylinder with base radius length " << BaseRadius << " and height " << Height << ": " << Area << " cm\n";	//Print outs the calculated surface area value to the terminal.
	}

	void Draw() {	//Re-defining the inherited Draw function for Cylinder objects. Example of polymorphism.
		cout << "\n"
			"     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    \n"
			"    @@  @@                               @@  @@   \n"
			"   @@    @@                             @@    @@  \n"
			"   @@     @                             @     @@  \n"
			"  @@      @@                           @@      @@ \n"
			"  @@      @@                           @@      @@ \n"
			"  .@      @@                           @@      @  \n"
			"   @@    @@                             @@    @@  \n"
			"    @@  /@                               @(  @@   \n"
			"     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    \n";			//Prints a cylinder to the terminal.
	}
};