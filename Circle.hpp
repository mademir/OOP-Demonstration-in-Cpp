#pragma once
/*	Circle is a subclass for 2 dimensional circle shapes that is inherited from the TwoDimensions class
			which inherits from the Geometry superclass. Example of multi-level inheritence.
		*/
class Circle : public TwoDimensions {
public:	//Public access specifier is used to make the variables and the methods accessible outside the class.
	int Sides = 1;		//Inherited Sides variable is set to 1 as the circle has only 1 side. Example of polymorphism.
	int Corners = 0;	//Inherited Corners variable is set to 0 as the circle has no sides. Example of polymorphism.
	double RadiusLength;	//A variable of type double to store the radius length value of the circle.

	Circle(int radiusLength) {	//Constructor for Circle class that takes an integer variable as argument.
		RadiusLength = radiusLength;	//Sets RadiusLength to the variable that was given during initialization.
	}

	void CalculateArea() {	//Re-defining the inherited CalculateArea function for Circle objects. Example of polymorphism.
		double Area = PI * pow(RadiusLength, 2);	//Calculates the area of a circle from its radius length and stores it.
		cout << "Area of circle with radius " << RadiusLength << ": " << Area << " cm^2\n";	//Print outs the calculated area value to the terminal.
	}

	void CalculatePerimeter() {	//Re-defining the inherited CalculatePerimeter function for Circle objects. Example of polymorphism.
		double Perimeter = 2.0 * PI * RadiusLength;	//Calculates the perimeter of a circle from its radius length and stores it.
		cout << "Perimeter of circle with radius " << RadiusLength << ": " << Perimeter << " cm\n";	//Print outs the calculated perimeter value to the terminal.
	}

	void Draw() {	//Re-defining the inherited Draw function for Circle objects. Example of polymorphism.
		cout << "\n"
			"                       @@@@@                     \n"
			"               @@@@@@@       @@@@@@              \n"
			"           @@@@                     @@@@         \n"
			"        @@@                             @@@      \n"
			"      @@@                                 @@     \n"
			"     @@                                    @@@   \n"
			"   @@@                                       @@  \n"
			"   @@                                         @@ \n"
			"  @@                                          @@ \n"
			"  @@                                          @@ \n"
			"  @@                                          @@ \n"
			"  @@                                          @@ \n"
			"   @@                                        @@  \n"
			"    @@                                      @@   \n"
			"     *@@                                   @@    \n"
			"       @@@                               @@      \n"
			"          @@@                         @@@        \n"
			"             @@@@                @@@@            \n"
			"                  @@@@@@@@@@@@@. \n";						//Prints a circle to the terminal.
	}
};