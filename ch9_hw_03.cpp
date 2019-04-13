/*
 * ch9_hw_03.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string first, middle, last;
	char space;

	cout << "Enter your first name,then middle name or initial,and then last name(separated by space)>\n";
	cin >> first >> middle;
	space = getchar();
	if (space == ' ') {
		cin >> last;
		cout << last + ", " + first + " " + middle[0] + ".\n";
	}
	else
		cout << middle + ", " + first << endl;;




	









	system("pause");
	return 0;
}