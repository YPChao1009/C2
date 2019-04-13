/*
 * ch7_hw_02.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<cstdlib>
using namespace std;

class Rectangle
{
public:
	Rectangle(double w, double h);
	Rectangle();
	void set(double w,double h);
	
	
	double getArea();
	
	void output();
private:
	double width;
	double height;
};
int main(void)
{
	double width, height;
	cout << "Enter the width of this rectangle>";
	cin >> width;
	cout << "Enter the height of this rectangle>";
	cin >> height;
	cout << endl;
	Rectangle user(width, height);
	user.output();
	system("pause");
	return 0;
}

Rectangle::Rectangle(double w, double h)
{
	set(w, h);
}
Rectangle::Rectangle() : width(5), height(5)
{}
void Rectangle::set(double w,double h)
{
	if (w > 0)
		width = w;
	else {
		cout << "Your input is wrong!\n";
		exit(1);
	}
	if (h > 0)
		height = h;
	else {
		cout << "Your input is wrong!\n";
		exit(1);
	}
}
double Rectangle::getArea()
{
	return(width*height);
}

void Rectangle::output()
{
	cout << "Width:" << width << endl;
	cout << "Height:" << height << endl;
	cout << "Area:" << getArea() << endl;
}