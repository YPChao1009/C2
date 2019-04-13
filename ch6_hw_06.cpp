/*
 * ch6_hw_06.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<cstdlib>
using namespace std;

class BicycleSpeedometer
{
public:
	void input();
	void set(double d, double t);
	double getdistance();
	double gettime();
	double getspeed();
private:
	double distance;
	double time;
};


int main(void)
{
	BicycleSpeedometer travel;

	cout << "This travel:\n";
	travel.input();
	cout << "Your speed is " << travel.getspeed() << " miles per hour.\n";


	system("pause");
	return 0;
}
void BicycleSpeedometer::input()
{
	cout << "Enter the distance(miles)>";
	cin >> distance;
	cout << "Enter the time(minutes)>";
	cin >> time;
	if (distance < 0 || time < 0)
	{
		cout << "Your input is wrong!\n";
		exit(1);
	}
}
void BicycleSpeedometer::set(double d, double t)
{
	if (d > 0)
	{
		distance = d;
	}
	else
	{
		cout << "Illegal distance value!\n";
		exit(1);
	}
	if (t > 0)
	{
		time = t;
	}
	else
	{
		cout << "Illegal time value!\n";
		exit(1);
	}
}
double BicycleSpeedometer::getdistance()
{
	return distance;
}
double BicycleSpeedometer::gettime()
{
	return time;
}
double BicycleSpeedometer::getspeed()
{
	return(distance/(time/60));
}