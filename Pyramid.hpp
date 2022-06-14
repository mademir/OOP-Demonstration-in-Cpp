#pragma once
/*	Pyramid is a subclass for 3 dimensional pyramid shapes that is inherited from the ThreeDimensions class
			which inherits from the Geometry superclass. Example of multi-level inheritence.
		*/
class Pyramid : public ThreeDimensions {
public:	//Public access specifier is used to make the variables and the methods accessible outside the class.
	int Faces = 5;		//Inherited Faces variable is set to 5 as the pyramid has 5 faces. Example of polymorphism.
	int Edges = 8;		//Inherited Edges variable is set to 8 as the pyramid has 8 edges. Example of polymorphism.
	int Corners = 5;	//Inherited Corners variable is set to 5 as the pyramid has 5 corners. Example of polymorphism.
	int BaseSideLength, Height;	//Variables of type int to store the side length value of the base and the height value of the pyramid.

	Pyramid(int baseSideLength, int height) {	//Constructor for Pyramid class that takes two integer variables as arguments.
		BaseSideLength = baseSideLength;		//Sets BaseSideLength to the first variable that was given during initialization.
		Height = height;						//Sets Height to the second variable that was given during initialization.
	}

	void CalculateVolume() {	//Re-defining the inherited CalculateVolume function for Pyramis objects. Example of polymorphism.
		double Volume = (pow(BaseSideLength, 2) * Height) / 3.0;	//Calculates the volume of a pyramid from its base side length and height and stores it.
		cout << "Volume of pyramid with base side length " << BaseSideLength << " and height " << Height << ": " << Volume << " cm^3\n";	//Print outs the calculated volume value to the terminal.
	}

	void CalculateArea() {		//Re-defining the inherited CalculateArea function for Pyramis objects. Example of polymorphism.
		double Area = pow(BaseSideLength, 2) + (4 * ((BaseSideLength * sqrt(pow((BaseSideLength / 2.0), 2) + pow(Height, 2))) / 2.0));	//Calculates the surface area of a pyramid from its base side length and height and stores it.
		cout << "Surface area of pyramid with base side length " << BaseSideLength << " and height " << Height << ": " << Area << " cm\n";	//Print outs the calculated surface area value to the terminal.
	}

	void Draw() {	//Re-defining the inherited Draw function for Pyramid objects. Example of polymorphism.
		cout << "\n"
			"                     @@@@                         \n"
			"                   .@  @@  @@@                    \n"
			"                  @     @@       #@@              \n"
			"                 @        @            *@@.       \n"
			"               @           @,                 @@  \n"
			"              @             *@                @/  \n"
			"            /@                @              @@   \n"
			"           @                   @*           @@    \n"
			"          @                     (@         *@     \n"
			"        @%                        @       ,@      \n"
			"       @                           @@    ,@       \n"
			"     @@                             @@   @        \n"
			"    @                                 @*@         \n"
			"   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(         \n";			//Prints a pyramid to the terminal.
	}
};