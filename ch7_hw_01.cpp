/*
 * ch7_hw_01.cpp
 * Author:Yun Pei Chao 
 */
#include <iostream>
#include <cstdlib>
using namespace std;

class RainbowColor {
public:
	RainbowColor(char f_letter);
	RainbowColor(int colorvalue);
	RainbowColor();   //default constructor
	void input();
	void output();
	int get_next(int code);
	RainbowColor next_color();
private:
	int color;
};

int main() {
	char color_letter;
	//testing the default constructor 
	cout << "Testing the default constructor" << endl;
	RainbowColor user;
	user.output();
	cout << endl;

	//construct the color using the constructor
	cout << "Testing the constructor with one integer argument." << endl;
	user.input();

	//construct the color using the constructor
	cout << "Testing the constructor with  the first letter in the name of the color." << endl;
	cout << "Enter the first letter =>";
	cin >> color_letter;
	RainbowColor user1(color_letter);
	user1.output();

	//test the next_color
	
	int colorcode;
	cout << "Enter the color code=>";
	cin >> colorcode;
	RainbowColor i(colorcode);
	RainbowColor type = i.next_color();
	cout << endl << "Next color" << endl;
	type.output();

	system("pause");
	return 0;
}

//red for 0, orange for 1,yellow for 2, green for 3, blue for 4, indigo for 5, violet for 6
RainbowColor::RainbowColor(char f_letter)
{
	switch (f_letter) {
	case 'r':
		color = 0; break;
	case 'o':
		color = 1; break;
	case 'y':
		color = 2; break;
	case 'g':
		color = 3; break;
	case 'b':
		color = 4; break;
	case 'i':
		color = 5; break;
	case 'v':
		color = 6; break;
	default:
		cout << "Error color code." << endl;
	}
}

RainbowColor::RainbowColor(int colorvalue)
	:color(colorvalue)
{
}

//initialize the color for 0 (red)
RainbowColor::RainbowColor()
	: color(0)
{
}

void RainbowColor::input()
{
	int colorcode;
	cout << "0 for red,1 for orange,2 for yellow,3 for green,4 for blue,5 for indigo, 6 for violet" << endl;
	cout << "Enter the rainbow color for integer=>";
	cin >> colorcode;

	//store the colorcode into class member(color)
	RainbowColor r(colorcode);

	//output the color as an integer
	cout << "The color code that you enter is " << r.color << " ." << endl;
}

void RainbowColor::output()
{
	switch (color) {
	case 0:
		cout << "The color you enter is red." << endl; break;
	case 1:
		cout << "The color you enter is orange." << endl; break;
	case 2:
		cout << "The color you enter is yellow." << endl; break;
	case 3:
		cout << "The color you enter is green." << endl; break;
	case 4:
		cout << "The color you enter is blue." << endl; break;
	case 5:
		cout << "The color you enter is indigo." << endl; break;
	case 6:
		cout << "The color you enter is violet." << endl; break;
	default:
		cout << "You enter a error color code." << endl;
	}
}

int RainbowColor::get_next(int code)
{
	return code;
}

RainbowColor RainbowColor::next_color()
{
	if (color == 6)
		return RainbowColor(0);
	else
		return RainbowColor(color + 1);
}
