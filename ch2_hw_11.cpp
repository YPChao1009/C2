/*
 * ch2_hw_11.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(void) {

	fstream inputstream;
	inputstream.open("text.txt");
	string firstname,lastname;
	int feet, inch;
	
	int ideal;
	
	
		
	while(inputstream >> firstname&&inputstream >> lastname){
		
		inputstream>> feet>> inch;
		
		ideal = (110 * (feet / 5)) + (((feet % 5*12) + inch) * 5);
cout << "Name: " << firstname <<"\t"<< lastname <<endl;
		cout << "Ideal body weight: " << ideal << " pounds\n"<<endl;
		
	}
	inputstream.close();
	
	system("pause");
	return 0;
}