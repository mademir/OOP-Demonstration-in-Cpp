#pragma once
//ThreeDimensions is a subclass inherited from the Geometry superclass for 3 dimensional shapes. Example of inheritence.
class ThreeDimensions : public Geometry {
public:	//Public access specifier is used to make the variables and the methods accessible outside the class.
	void CalculateVolume() {	//Re-defining the inherited CalculateVolume function for ThreeDimensions objects. Example of polymorphism.
		cout << "Default volume calculation for 3 dimensional shapes.\n";	//Default message for calculating the volume for ThreeDimensions objects.
	}

	void CalculateArea() {		//Re-defining the inherited CalculateArea function for ThreeDimensions objects. Example of polymorphism.
		cout << "Default area calculation for 3 dimensional shapes.\n";		//Default message for calculating the area for ThreeDimensions objects.
	}

	virtual void Draw() {		//Re-defining the inherited Draw function for ThreeDimensions objects. Example of polymorphism.
		cout << "Default drawing for 2 dimensional shapes.\n";				//Default message for the draw function for ThreeDimensions objects.
	}
};