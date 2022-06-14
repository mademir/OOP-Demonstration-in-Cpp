#pragma once
/*	Cube is a subclass for 3 dimensional cube shapes that is inherited from the ThreeDimensions class
			which inherits from the Geometry superclass. Example of multi-level inheritence.
		*/
class Cube : public ThreeDimensions {
public:	//Public access specifier is used to make the variables and the methods accessible outside the class.
	int Faces = 6;		//Inherited Faces variable is set to 6 as the cube has 6 faces. Example of polymorphism.
	int Edges = 12;		//Inherited Edges variable is set to 12 as the cube has 12 edges. Example of polymorphism.
	int Corners = 8;	//Inherited Corners variable is set to 8 as the cube has 8 corners. Example of polymorphism.
	int SideLength;		//A variable of type int to store the side length value of the cube.

	Cube(int sideLength) {	//Constructor for Cube class that takes an integer variable as argument.
		SideLength = sideLength;	//Sets SideLength to the variable that was given during initialization.
	}

	void CalculateVolume() {	//Re-defining the inherited CalculateVolume function for Cube objects. Example of polymorphism.
		double Volume = pow(SideLength, 3);	//Calculates the volume of a cube from its side length and stores it.
		cout << "Volume of cube with side length " << SideLength << ": " << Volume << " cm^3\n";	//Print outs the calculated volume value to the terminal.
	}

	void CalculateArea() {		//Re-defining the inherited CalculateArea function for Cube objects. Example of polymorphism.
		double Area = pow(SideLength, 2) * Faces;	//Calculates the surface area of a cube from its side length and stores it.
		cout << "Surface area of cube with side length " << SideLength << ": " << Area << " cm\n";	//Print outs the calculated surface area value to the terminal.
	}

	void Draw() {	//Re-defining the inherited Draw function for Cube objects. Example of polymorphism.
		cout << "\n"
			"                         @                        \n"
			"                   @@@@     @@@@                  \n"
			"            #@@@&                 @@@@/           \n"
			"      @@@@                               @@@@     \n"
			"   @@@.                                     .@@@  \n"
			"   @,   @@@@                           @@@@   @@  \n"
			"   @,        (@@@                 @@@,        @@  \n"
			"   @,              @@@%     @@@@              @@  \n"
			"   @,                   @@&                   @@  \n"
			"   @,                    @                    @@  \n"
			"   @,                    @                    @@  \n"
			"   @,                    @                    @@  \n"
			"   @,                    @                    @@  \n"
			"   @,                    @                    @@  \n"
			"   @,                    @                    @@  \n"
			"   @@                    @                    @@  \n"
			"      .@@@               @               @@@      \n"
			"           @@@%          @          @@@@          \n"
			"                @@@      @      @@@               \n"
			"                     @@@ @ @@@                    \n";			//Prints a cube to the terminal.
	}
};