#pragma once
/*	Sphere is a subclass for 3 dimensional sphere shapes that is inherited from the ThreeDimensions class
			which inherits from the Geometry superclass. Example of multi-level inheritence.
		*/
class Sphere : public ThreeDimensions {
public:	//Public access specifier is used to make the variables and the methods accessible outside the class.
	int Faces = 1;		//Inherited Faces variable is set to 1 as the sphere has only 1 face. Example of polymorphism.
	int Edges = 0;		//Inherited Edges variable is set to 0 as the sphere has no edges. Example of polymorphism.
	int Corners = 0;	//Inherited Corners variable is set to 0 as the sphere has no corners. Example of polymorphism.
	double RadiusLength;//A variable of type int to store the radius length value of the sphere.

	Sphere(int radiusLength) {	//Constructor for Sphere class that takes an integer variable as argument.
		RadiusLength = radiusLength;	//Sets RadiusLength to the variable that was given during initialization.
	}

	void CalculateVolume() {	//Re-defining the inherited CalculateVolume function for Sphere objects. Example of polymorphism.
		double Volume = (4.0 / 3.0) * PI * pow(RadiusLength, 3);	//Calculates the volume of a sphere from its radius length and stores it.
		cout << "Volume of sphere with radius " << RadiusLength << ": " << Volume << " cm^3\n";		//Print outs the calculated volume value to the terminal.
	}

	void CalculateArea() {		//Re-defining the inherited CalculateArea function for Sphere objects. Example of polymorphism.
		double Area = 4.0 * PI * pow(RadiusLength, 2);			//Calculates the surface area of a sphere from its radius length and stores it.
		cout << "Surface area of sphere with radius " << RadiusLength << ": " << Area << " cm\n";	//Print outs the calculated surface area value to the terminal.
	}

	void Draw() {	//Re-defining the inherited Draw function for Sphere objects. Example of polymorphism.
		cout << "\n"
			"                      .@@@@@.                     \n"
			"              /@@@@@@@@@     *@@@@@@/             \n"
			"          #@@@,    @@@              .@@@#         \n"
			"       .@@@       @@                    @@@.      \n"
			"     #@@         @@                        @@%    \n"
			"    @@          &@@                          @@   \n"
			"  ,@@           @@                            @@, \n"
			"  @@           /@@                             @@ \n"
			" @@            @@                               @@\n"
			"(@@            @@                               @@\n"
			"@@@            @@                               @@\n"
			"(@@@           @@                              @@@\n"
			" @@#@@@#       @@                          #@@@%@@\n"
			"  @@    @@@@@@@@@@                 &@@@@@@@    @@ \n"
			"  ,@@           @@%@@@@@@@@@@@@@%.            @@, \n"
			"    @@          &@@                          @@   \n"
			"     #@@         @@                        @@%    \n"
			"       .@@@       @@                    @@@.      \n"
			"          #@@@,    @@@              .@@@%         \n"
			"              /@@@@@@@@@     ,@@@@@@/             \n"
			"                      .@@@@@.                     \n";			//Prints a sphere to the terminal.
	}
};