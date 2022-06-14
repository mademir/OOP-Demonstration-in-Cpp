#pragma once
class Geometry {	//Main class called Geometry to handle any shape object.
public:	//Public access specifier is used to make the variables and the methods accessible outside the class.
	//Variables are set to NULL as they will be set in subclasses using polymorphism.
	int Sides = NULL;	//To store the number of sides on a shape as an integer.
	int Edges = NULL;	//To store the number of edges on a shape as an integer.
	int Faces = NULL;	//To store the number of faces on a shape as an integer.
	int Corners = NULL;	//To store the number of corners on a shape as an integer.

	/*	Methods are default for a Geometry object and will be overriden in subclasses using polymorphism.
		Used virtual keyword to make the functions virtual so that they can point to the correct version of the method in the subclasses when used.
	*/
	virtual void Draw() {				//Default draw function for Geometry objects.
		cout << "Default drawing for all shapes.\n";			//Default message for the draw function for Geometry objects.
	}

	virtual void CalculateVolume() {	//Default function to calculate the volume for Geometry objects.
		cout << "Default volume calculation.\n";				//Default message for calculating the volume for Geometry objects.
	}

	virtual void CalculateArea() {		//Default function to calculate the area for Geometry objects.
		cout << "Default area calculation for all shapes.\n";	//Default message for calculating the area for Geometry objects.
	}

	virtual void CalculatePerimeter() {	//Default function to calculate the perimeter for Geometry objects.
		cout << "Default perimeter calculation.\n";				//Default message for calculating the perimeter for Geometry objects.
	}
};