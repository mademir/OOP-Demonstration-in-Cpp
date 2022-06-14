#pragma once
/*	Square is a subclass for 2 dimensional square shapes that is inherited from the TwoDimensions class
			which inherits from the Geometry superclass. Example of multi-level inheritence.
		*/
class Square : public TwoDimensions {
public:	//Public access specifier is used to make the variables and the methods accessible outside the class.
	int Sides = 4;		//Inherited Sides variable is set to 4 as the square has 4 sides. Example of polymorphism.
	int Corners = 4;	//Inherited Corners variable is set to 4 as the square has 4 corners. Example of polymorphism.
	int SideLength;		//A variable of type int to store the side length value of the square.

	Square(int sideLength) {	//Constructor for Square class that takes an integer variable as argument.
		SideLength = sideLength;	//Sets SideLength to the variable that was given during initialization.
	}

	void CalculateArea() {	//Re-defining the inherited CalculateArea function for Square objects. Example of polymorphism.
		double Area = pow(SideLength, 2);	//Calculates the area of a square from its side length and stores it.
		cout << "Area of square with side length " << SideLength << ": " << Area << " cm^2\n";	//Print outs the calculated area value to the terminal.
	}

	void CalculatePerimeter() {	//Re-defining the inherited CalculatePerimeter function for Square objects. Example of polymorphism.
		int Perimeter = 4 * SideLength;		//Calculates the perimeter of a square from its side length and stores it.
		cout << "Perimeter of square with side length " << SideLength << ": " << Perimeter << " cm\n";	//Print outs the calculated perimeter value to the terminal.
	}

	void Draw() {	//Re-defining the inherited Draw function for Square objects. Example of polymorphism.
		cout << "\n"
			"  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@                                       @@ \n"
			"  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ \n";			//Prints a square to the terminal.
	}
};