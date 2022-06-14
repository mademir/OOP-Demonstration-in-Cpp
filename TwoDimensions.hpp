#pragma once
//TwoDimensions is a subclass inherited from the Geometry superclass for 2 dimensional shapes. Example of inheritence.
class TwoDimensions : public Geometry {
public:	//Public access specifier is used to make the variables and the methods accessible outside the class.
	int Faces = 1;	//Inherited Faces variable is set to 1 as all 2 dimensional shapes have 1 face. Example of polymorphism.

	void CalculateArea() {		//Re-defining the inherited CalculateArea function for TwoDimensions objects. Example of polymorphism.
		cout << "Default area calculation for 2 dimensional shapes.\n";			//Default message for calculating the area for TwoDimensions objects.
	}

	void CalculatePerimeter() {	//Re-defining the inherited CalculatePerimeter function for TwoDimensions objects. Example of polymorphism.
		cout << "Default perimeter calculation for 2 dimensional shapes.\n";	//Default message for calculating the perimeter for TwoDimensions objects.
	}

	void Draw() {				//Re-defining the inherited Draw function for TwoDimensions objects. Example of polymorphism.
		cout << "Default drawing for 2 dimensional shapes.\n";					//Default message for the draw function for TwoDimensions objects.
	}
};