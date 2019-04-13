/*
 * ch8_hw_07.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<cstdlib>
using namespace std;

class PrimeNumber {
public:
	PrimeNumber(int prime);
	PrimeNumber();
	int getNumber();
	PrimeNumber operator++();
	PrimeNumber operator--();
	

private:
	int number;
	bool isPrime(int num);
};
int main(void)
{
	PrimeNumber p1, p2(13);

	cout << p1.getNumber() << endl;

	PrimeNumber p3 = ++p1;
	PrimeNumber p4 = --p1;
	cout << "The next prime: " << p3.getNumber() << endl;
	cout << "The previous prime: " << p4.getNumber() << endl;
	cout << endl;
	cout << p2.getNumber() << endl;
	PrimeNumber p5 = ++p2;
	PrimeNumber p6 = --p2;
	cout << "The next prime: " << p5.getNumber() << endl;
	cout << "The previous prime: " << p6.getNumber() << endl;

	system("pause");
	return 0;
}
PrimeNumber::PrimeNumber(int prime)
	:number(prime)
{}
PrimeNumber::PrimeNumber()
	:number(1)
{}
int PrimeNumber::getNumber()
{
	return number;
}
PrimeNumber PrimeNumber::operator++()
{
	int nextPrime = number;
	do {
		nextPrime++;
	}while (!isPrime(nextPrime));
	return PrimeNumber(nextPrime);
}
PrimeNumber PrimeNumber::operator--()
{
	int lastPrime = number;
	do {
		lastPrime--;
		if (lastPrime < 1)
			return PrimeNumber(1);
	} while (!isPrime(lastPrime));
	return PrimeNumber(lastPrime);
}
bool PrimeNumber::isPrime(int num)
{
	for (int i = num - 1;i > 1;i--)
	{
		if ((num%i) == 0)
			return false;
	}
	return true;
}