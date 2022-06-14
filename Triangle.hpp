#pragma once
/*	Triangle is a subclass for 2 dimensional triangle shapes that is inherited from the TwoDimensions class
			which inherits from the Geometry superclass. Example of multi-level inheritence.
		*/
class Triangle : public TwoDimensions {
public:	//Public access specifier is used to make the variables and the methods accessible outside the class.
	int Sides = 3;		//Inherited Sides variable is set to 3 as the triangle has 3 sides. Example of polymorphism.
	int Corners = 3;	//Inherited Corners variable is set to 3 as the triangle has 3 corners. Example of polymorphism.
	double A, B, C, Height;	//Variables of type double to store the three side length values of the triangle.

	Triangle(double a, double b, double c) {	//Constructor for Triangle class that takes three double variables as arguments.
		A = a;	//Sets A to the first variable that was given during initialization.
		B = b;	//Sets B to the second variable that was given during initialization.
		C = c;	//Sets C to the third variable that was given during initialization.
		Height = 0.5 * sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c)) / b; //Uses Heron's formula to calculate the height from the side lengths and stores it.
	}

	void CalculateArea() {	//Re-defining the inherited CalculateArea function for Triangle objects. Example of polymorphism.
		double Area = (B * Height) / 2.0;	//Calculates the area of a triangle from its base side length and its height then stores it.
		cout << "Area of triangle with side lengths " << A << ", " << B << " and " << C << ": " << Area << " cm^2\n";	//Print outs the calculated area value to the terminal.
	}

	void CalculatePerimeter() {	//Re-defining the inherited CalculatePerimeter function for Triangle objects. Example of polymorphism.
		double Perimeter = A + B + C;	//Calculates the perimeter of a triangle from its side lengths and stores it.
		cout << "Perimeter of triangle with side lengths " << A << ", " << B << " and " << C << ": " << Perimeter << " cm\n";	//Print outs the calculated perimeter value to the terminal.
	}

	void Draw() {	//Re-defining the inherited Draw function for Triangle objects. Example of polymorphism.
		cout << "\n"
			"                        @@@                       \n"
			"                      @@@ @@@                     \n"
			"                     @@     @@                    \n"
			"                   @@@       @@@                  \n"
			"                  @@           @@                 \n"
			"                @@%             @@@               \n"
			"              ,@@                 @@              \n"
			"             @@                     @@            \n"
			"           @@@                       @@@          \n"
			"          @@                           @@         \n"
			"        @@@                             @@@       \n"
			"       @@                                 @@      \n"
			"     @@@                                   @@@    \n"
			"    @@                                       @@   \n"
			"  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ \n";			//Prints a square to the terminal.
	}
};