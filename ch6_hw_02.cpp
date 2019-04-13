/*
 * ch6_hw_02.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<cstdlib>
using namespace std;
#define PI 3.141593f

class Circle {
public:
	void input();	
	void set(double r);
	double getRadius();
	double getArea();
	double getDiameter();
	double getCircumference();
private:
	double radius;
};


int main(void)
{
	Circle value;
  cout << "Enter the radius of the circle(cm)>";
  value.input();
  cout << "Area:";
  cout << value.getArea() << endl;
  cout << "Diameter:";
  cout << value.getDiameter() << endl;
  cout << "Circumference:";
  cout << value.getCircumference() << endl;



    system("pause");
    return 0;
}
void Circle::input()
{
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
	cin >> radius;
	if (radius < 0)
	{
		cout << "Illegal radius!\n";
		exit(1);
	}
}
double Circle::getRadius()
{
	return radius;
}
void Circle::set(double r)
{
	if (r > 0)
		radius = r;
	else
	{
		cout << "Illegal radius!\n";
		exit(1);
	}

	}
double Circle::getArea()
{
	return(radius*radius*PI);
}
double Circle::getDiameter()
{
	return(2*radius);
}
double Circle::getCircumference()
{
	return(2 * PI*radius);
}
