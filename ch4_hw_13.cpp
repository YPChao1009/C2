/*
 * ch4_hw_13.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

double convertToMPH(int minutes, int seconds);
double convertToMPH(double kph);

int main(void)
{
	int num,minute, second;
	double kph;
	
	cout << "1:Pace(x:xx mile)  2:Kilometers per hour\n";
cout << "Enter the expression of your speed>";
cin >> num;

	if(num==1){
cout << "Enter (x:xx mile)>";
	cin >> minute >> second;
	
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);

		cout << "Your speed is " << convertToMPH(minute, second) << " miles per hour.\n";
	}
	else if (num==2)
	{
		
		cout << "Enter the kilometers in a hour>";
		cin >> kph;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		
		cout << "Your speed is " << convertToMPH(kph) << " miles per hour.\n";
	}
	system("pause");
	return 0;
}
double convertToMPH(int minutes, int seconds)
{
	double hour;
	hour = ((minutes * 60) + seconds) / (60 * 60.0);
	return(1 / hour);
}
double convertToMPH(double kph)
{
	return(kph / 1.61);
}