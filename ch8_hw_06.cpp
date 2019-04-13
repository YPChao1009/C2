/*
 * ch8_hw_06.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<cmath>
using namespace std;

class MyInteger {
	public:
		MyInteger();
		MyInteger(int num);
		void set(int num);
		int get() const;
		int operator[](int index);
private:
	int integer;
};
int main(void)
{
	MyInteger integer;

	integer.set(481054216);
	cout << "My integer: " << integer.get() << endl;
	int i;
	cout << "Enter the index that you want to find the digit: ";
	cin >> i;

	if (integer[i] == -1)
		cout << "The integer does not exist.\n";
	else
		cout << "The digit is: " << integer[i] << endl;
	


	system("pause");
	return 0;
}
MyInteger::MyInteger()
	:integer(0)
{}
MyInteger::MyInteger(int num)
	:integer(num)
{}
void MyInteger::set(int num)
{
	integer = num;
}
int MyInteger::get() const
{
	return integer;
}
int MyInteger::operator[](int index)
{
	int size = 0;
	int replace = integer;
	do {
		replace = replace / 10;
		size++;
	} while(replace != 0);
	if (index >= size)
	{
		cout << "It is not in range!\n";
		return -1;
	}
	int target=0;
	int left = pow(10.0, index + 1);
	target = integer%left;
	int right = pow(10.0, index);
	target = target / right;
	return target;
}