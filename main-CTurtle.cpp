 /* L1: Loopy C-Turtles
 * C-Turtle Author: Jesse Walker-Schalder 
 * Original Code Author: Jesse Walker-Schalder and Jan Pearce
 * Modified by: Dimitrios Ntentia
 */

#include "CTurtle.hpp";   //This brings in the CTurtle library for use
#include <iostream>
#include<windows.h>


namespace ct = cturtle;  //This makes it possible to use the CTurtle commands using ct::

int main() {

	int resp;
	int fri;

	std::cout << "Would you like a military helicopter?(1)\n";
	std::cout << "Or would you like a civilian helicopter?(2)\n";
	std::cin >> resp;


	ct::TurtleScreen window;
	window.bgcolor({ "white" });
	ct::Turtle turtle(window);
	turtle.speed(ct::TS_SLOWEST);







	turtle.write("Ready for an adventure!!!"); 
	turtle.right(90);
	turtle.penup();
	turtle.forward(150);
	turtle.pendown();
	if (resp <  2) {					//this conditional is here in order to determine the color of the helicopter. If the user wants a military helicopter, then the helicopter is Green, else it is blue
		turtle.fillcolor({ "green" });
		turtle.begin_fill();
		turtle.circle(80);
		turtle.end_fill();
	}
	else {
		turtle.fillcolor({ "blue" });
		turtle.begin_fill();
		turtle.circle(80);
		turtle.end_fill();
	}


	
	turtle.right(180);
	turtle.penup();
	turtle.forward(40);
	turtle.pendown();
	turtle.forward(20);
	for (int i = 0; i < 8; i++) {//this loop is here in order to make the main fan of the helicopter
		turtle.forward(50);
		turtle.forward(-50);
		turtle.right(45);
	}
	turtle.right(180);
	turtle.penup();
	turtle.forward(40);

	turtle.right(90);
	turtle.pendown();

	turtle.forward(100);
	turtle.right(90);
	turtle.forward(20);

	for (int i = 0; i < 8; i++) {//this loope is here in order to make the small fan of the helicopter
		turtle.forward(25);
		turtle.forward(-25);
		turtle.right(45);
	}
	//the code bellow makes the legs of the helicopter
	turtle.penup();
	turtle.right(90);
	turtle.forward(100);
	turtle.right(90);
	turtle.forward(60);
	turtle.right(45);
	turtle.pendown();
	turtle.forward(30);
	turtle.left(135);
	turtle.forward(55);
	turtle.forward(-10);
	turtle.left(135);
	turtle.forward(45);




chrome://vivaldi-webui/startpage?section=Speed-dials&background-color=#2f2f2f
	window.exitonclick();  //exists graphics screen
	return 0;
}

