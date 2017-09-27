/*
Logan Smith- 9/21/2017 2nd
Display Text
Introduction into C++ IDE Visual Studios 2015
Create New Project and Display Text to Console
*/

//Libraries
#include <iostream> 
#include <conio.h>

//Namespace
using namespace std;

//Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//MAIN
void main() {
	char text_l = '2nd';
	cout << 'H' << 'E' << 'L' << 'L' << 'O' << ' ' << "WORLD!" << endl;
	cout << "Logan Smith Period 2" << endl;
	pause();
}