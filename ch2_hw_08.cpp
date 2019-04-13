/*
 * ch2_hw_08.cpp
 * Author:Yun Pei Chao 
 */
#include <iostream>

using namespace std;

int main(void) {

	int Celsius;
	double Fahrenheit;
		for (Celsius = 100;Celsius <= 100;Celsius--) {
         
			Fahrenheit = (9* Celsius)/5 + 32;
			
			if (Fahrenheit == Celsius)
			{
				cout << "Fahrenheit and Celsius at the " << Celsius << " degrees are the same.\n";
				break;
			}
		}
	
	

				
	system("pause");
	return 0;
}