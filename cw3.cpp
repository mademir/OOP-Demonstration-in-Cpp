#include <iostream> //Includes iostream for input and output.
#include <string>	//Includes string for the string type.
#include <cmath>	//Includes cmath for mathematical functions like sin, cos.

# define PI 3.14159265358979323846	//Defined a constant PI to access it when needed in calculations.
using namespace std;	//Using the namespace std instead of having to type std:: each use.

#include "Geometry.hpp"
#include "TwoDimensions.hpp"
#include "Circle.hpp"
#include "Square.hpp"
#include "Triangle.hpp"
#include "ThreeDimensions.hpp"
#include "Cube.hpp"
#include "Sphere.hpp"
#include "Pyramid.hpp"
#include "Cylinder.hpp"

/*	OptionsFor2D function takes an argument of type Circle, Square or Triangle,
	and does the operations the user selects on the shape. 
*/
template<typename Shape>	//Using a template with naming the type Shape for this function as it can take any of the 2D shape types(Circle, Square, Triangle) as an argument.
void OptionsFor2D(Shape* shape) {
	int option;			//Variable of type integer to store the option selected.
	bool stop = false;	//Variable of type boolean to control the loop iteration.

	while (!stop) {		//While loop that asks the user to select an option until the exit option is selected.
		cout << "Your shape has been created.\n\n"
			"Please choose an option.\n\n"
			"1 - Calculate the Area of the Shape\n"
			"2 - Calculate the Perimeter of the Shape\n"
			"3 - Draw the shape\n"
			"4 - Show the properties of the shape\n"
			"5 - Back\n\n"
			"Select an option: ";							//Prints the list of operations can be done on the shape.

		cin >> option;	//Takes user input and stores it inside option variable.

		switch (option)	//A switch case to navigate according to the option selected by the user.
		{
		case 1:	//Calculate the Area of the Shape
			shape->CalculateArea();	//Accesses the CalculateArea method of the shape.
			break;
		case 2:	//Calculate the Perimeter of the Shape
			shape->CalculatePerimeter();	//Accesses the CalculatePerimeter method of the shape.
			break;
		case 3:	//Draw the shape
			shape->Draw();	//Accesses the Draw method of the shape.
			break;
		case 4:	//Show the properties of the shape
			cout << "Faces: " << shape->Faces << "\n";		//Accesses the Faces variable of the shape.
			cout << "Sides: " << shape->Sides << "\n";		//Accesses the Sides variable of the shape.
			cout << "Corners: " << shape->Corners << "\n";	//Accesses the Corners variable of the shape.
			break;
		case 5: //Back
			stop = true;	//Sets stop variable to true to stop the iteration.
			break;
		default:	//Any other input than the ones in the list.
			break;	//Breaks the loop for the next iteration where the list is printed again.
		}
		if (!stop) {	//Checks if the stop variable is set to true.
			system("pause");	//System call that pauses the execution until any key is pressed.
		}
		system("cls");	//System call that cleans the terminal screen at the end of the iteration.
	}
}

/*	OptionsFor3D function takes an argument of type Cube, Sphere, Pyramid or Cylinder,
	and does the operations the user selects on the shape.
*/
template<typename Shape>	//Using a template with naming the type Shape for this function as it can take any of the 3D shape types(Cube, Sphere, Pyramid, Cylinder) as an argument.
void OptionsFor3D(Shape* shape) {
	int option;			//Variable of type integer to store the option selected.
	bool stop = false;	//Variable of type boolean to control the loop iteration.

	while (!stop) {
		cout << "Your shape has been created.\n\n"
			"Please choose an option.\n\n"
			"1 - Calculate the Volume of the Shape\n"
			"2 - Calculate the Surface Area of the Shape\n"
			"3 - Draw the shape\n"
			"4 - Show the properties of the shape\n"
			"5 - Back\n\n"
			"Select an option: ";							//Prints the list of operations can be done on the shape.

		cin >> option;	//Takes user input and stores it inside option variable.

		switch (option)	//A switch case to navigate according to the option selected by the user.
		{
		case 1:	//Calculate the Volume of the Shape
			shape->CalculateVolume();	//Accesses the CalculateVolume method of the shape.
			break;
		case 2:	//Calculate the Surface Area of the Shape
			shape->CalculateArea();		//Accesses the CalculateArea method of the shape.
			break;
		case 3:	//Draw the shape
			shape->Draw();				//Accesses the Draw method of the shape.
			break;
		case 4:	//Show the properties of the shape
			cout << "Faces: " << shape->Faces << "\n";		//Accesses the Faces variable of the shape.
			cout << "Edges: " << shape->Edges << "\n";		//Accesses the Edges variable of the shape.
			cout << "Corners: " << shape->Corners << "\n";	//Accesses the Corners variable of the shape.
			break;
		case 5:	//Back
			stop = true;	//Sets stop variable to true to stop the iteration.
			break;
		default:	//Any other input than the ones in the list.
			break;	//Breaks the loop for the next iteration where the list is printed again.
		}
		if (!stop) {			//Checks if the stop variable is set to true.
			system("pause");	//System call that pauses the execution until any key is pressed.
		}
		system("cls");	//System call that cleans the terminal screen at the end of the iteration.
	}
}

int main() {
	int option;			//Variable of type integer to store the option selected.

	while (true) {		//A while loop that runs until user chooses exit.
		system("cls");	//System call that cleans the terminal screen at the end of the iteration.
		cout << ""
			"-Geometry Main Menu-\n\n"
			"1 - 2D Shapes Menu\n"
			"2 - 3D Shapes Menu\n"
			"3 - Exit\n\n"
			"Select an option: ";			//Prints the list of options on the Geometry Main Menu.

		cin >> option;	//Takes user input and stores it inside option variable.
		system("cls");	//System call that cleans the terminal screen at the end of the iteration.

		switch (option)	//A switch case to navigate according to the option selected by the user.
		{
		case 1:	//2D Shapes Menu
			cout << ""
				"-2D Shapes Menu-\n\n"
				"Choose the Shape You Want to Create\n\n"
				"1 - Square\n"
				"2 - Circle\n"
				"3 - Triangle\n"
				"4 - Back\n\n"
				"Select an option: ";		//Prints the list of options on the 2D Shapes Menu.

			cin >> option;	//Takes user input and stores it inside option variable.
			system("cls");	//System call that cleans the terminal screen at the end of the iteration.
			

			switch (option){	//A switch case to navigate according to the option selected by the user.
				case 1: {	//Square
					system("cls");	//System call that cleans the terminal screen at the end of the iteration.
					int length;		//Variable of type integer to store the side length value of the square.
					cout << "Please enter the side length for the square.\n\nSide length: ";	//Prints to ask user for an input.
					cin >> length;	//Asks user to input the side length for the square.
					Square* shape= new Square(length);	//Creates a Square object with the side length taken from the user.
					OptionsFor2D(shape);	//Calls the function to do operations on the shape created.
					break;
				}
				case 2: {	//Circle
					system("cls");	//System call that cleans the terminal screen at the end of the iteration.
					int radius;		//Variable of type integer to store the radius length value of the circle.
					cout << "Please enter the radius length for the circle.\n\nRadius length: ";	//Prints to ask user for an input.
					cin >> radius;	//Asks user to input the radius length for the circle.
					Circle* shape = new Circle(radius);	//Creates a Circle object with the radius length taken from the user.
					OptionsFor2D(shape);	//Calls the function to do operations on the shape created.
					break;
				}
				case 3: {	//Triangle
					system("cls");	//System call that cleans the terminal screen at the end of the iteration.
					int a, b, c;	//Variables of type integer to store the side length values of the triangle.
					cout << "Please enter the lentghs for the three sides of the triangle.\nLengths should be correct for a triangle.\n\nFirst side length: ";	//Prints to ask user for an input.
					cin >> a;	//Asks user to input the side length for the triangle.
					cout << "\n\nSecond side length: ";	//Prints to ask user for an input.
					cin >> b;	//Asks user to input the side length for the triangle.
					cout << "\n\nThird side length: ";	//Prints to ask user for an input.
					cin >> c;	//Asks user to input the side length for the triangle.
					Triangle* shape = new Triangle(a,b,c);	//Creates a Triangle object with the side lengths taken from the user.
					OptionsFor2D(shape);	//Calls the function to do operations on the shape created.
					break;
				}
				default:	//Default case that breaks to get out of the menu if the user input is not within the range.
					break;
			}

			break;

		case 2:	//3D Shapes Menu
			cout << ""
				"-3D Shapes Menu-\n\n"
				"Choose the Shape You Want to Create\n\n"
				"1 - Cube\n"
				"2 - Sphere\n"
				"3 - Pyramid\n"
				"4 - Cylinder\n"
				"5 - Back\n\n"
				"Select an option: ";			//Prints the list of options on the 3D Shapes Menu.

			cin >> option;	//Takes user input and stores it inside option variable.
			system("cls");	//System call that cleans the terminal screen at the end of the iteration.


			switch (option) {	//A switch case to navigate according to the option selected by the user.
			case 1: {	//Cube
				system("cls");	//System call that cleans the terminal screen at the end of the iteration.
				int length;		//Variable of type integer to store the side length value of the Cube.
				cout << "Please enter the side length for the cube.\n\nSide length: ";	//Prints to ask user for an input.
				cin >> length;	//Asks user to input the side length for the cube.
				Cube* shape = new Cube(length);	//Creates a Cube object with the side length taken from the user.
				OptionsFor3D(shape);	//Calls the function to do operations on the shape created.
				break;
			}
			case 2: {	//Sphere
				system("cls");	//System call that cleans the terminal screen at the end of the iteration.
				int radius;		//Variable of type integer to store the radius length value of the sphere.
				cout << "Please enter the radius length for the sphere.\n\nRadius length: ";	//Prints to ask user for an input.
				cin >> radius;	//Asks user to input the radius length for the sphere.
				Sphere* shape = new Sphere(radius);	//Creates a Sphere object with the radius length taken from the user.
				OptionsFor3D(shape);	//Calls the function to do operations on the shape created.
				break;
			}
			case 3: {	//Pyramid
				system("cls");	//System call that cleans the terminal screen at the end of the iteration.
				int baseSideLength, height;	//Variables of type integer to store the base side length and the height values of the pyramid.
				cout << "Please enter the base side length of the pyramid.\n\nSide length of the base: ";	//Prints to ask user for an input.
				cin >> baseSideLength;	//Asks user to input the base side length for the pyramid.
				cout << "\n\nPlease enter the height of the pyramid.\n\nHeight : ";	//Prints to ask user for an input.
				cin >> height;			//Asks user to input the height for the pyramid.
				Pyramid* shape = new Pyramid(baseSideLength, height);	//Creates a Pyramid object with the base side length and height taken from the user.
				OptionsFor3D(shape);	//Calls the function to do operations on the shape created.
				break;
			}
			case 4: {	//Cylinder
				system("cls");	//System call that cleans the terminal screen at the end of the iteration.
				int baseRadiusLength, height;	//Variables of type integer to store the base radius length and the height values of the cylinder.
				cout << "Please enter the base radius length of the cylinder.\n\nRadius length of the base: ";	//Prints to ask user for an input.
				cin >> baseRadiusLength;		//Asks user to input the base radius length for the cylinder.
				cout << "\n\nPlease enter the height of the cylinder.\n\nHeight : ";	//Prints to ask user for an input.
				cin >> height;					//Asks user to input the height for the cylinder.
				Cylinder* shape = new Cylinder(baseRadiusLength, height);	//Creates a Cylinder object with the base radius length and height taken from the user.
				OptionsFor3D(shape);	//Calls the function to do operations on the shape created.
				break;
			}
			default:
				break;
			}

			break;

		case 3:	//Exit
			cout << "Exiting. Goodbye!";	//Prints the exit message.
			return 0;	//Exits the function.

		default:
			break;
		}
	}

	return 0;
}

