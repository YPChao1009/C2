/*
 * ch8_hw_03.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

class Complex {
public:
	Complex(double realPart, double imagPart);
	Complex(double realPart);
	Complex();
	friend const Complex operator+(const Complex& a1, const Complex& a2);
	friend const Complex operator-(const Complex& a1, const Complex& a2);
	friend const Complex operator*(const Complex& a1, const Complex& a2);
	friend bool operator==(const Complex& a1, const Complex& a2);
	friend ostream& operator <<(ostream& outputStream, const Complex& a);
	friend istream& operator >>(istream& inputStream, Complex& a);
private:
	double real;
	double imaginary;
};
int main(void)
{
	Complex c1(1,2), c2(2,-4);
cout<< "Complex number: c1(1, 2), c2(2, -4)\n";
	Complex c3 = c1 + c2;
	cout << "+:" << c3;

	Complex c4 = c1 - c2;
	cout << "-:" << c4;

	Complex c5 = c1 * c2;
	cout << "*:" << c5;

	if (c1 == c2)
		cout << "The complex numbers are the same.\n";
	else
		cout << "The complex numbers are different.\n";

	
	system("pause");
	return 0;
}
Complex::Complex(double realPart, double imagPart)
	:real(realPart),imaginary(imagPart)
{}
Complex::Complex(double realPart)
	:real(realPart),imaginary(0)
{}
Complex::Complex()
	:real(0),imaginary(0)
{}
const Complex operator+(const Complex& a1, const Complex& a2)
{
	double realValue = a1.real + a2.real;
	double imag = a1.imaginary + a2.imaginary;
	return Complex(realValue, imag);
	}
const Complex operator-(const Complex& a1, const Complex& a2)
{
	double realValue = a1.real - a2.real;
	double imag = a1.imaginary - a2.imaginary;
	return Complex(realValue, imag);
}
const Complex operator*(const Complex& a1, const Complex& a2)
{
	double realValue = (a1.real*a2.real) - (a1.imaginary*a2.imaginary);
	double imag = a1.real*a2.imaginary + a1.imaginary*a2.real;
	return Complex(realValue, imag);

}
bool operator==(const Complex& a1, const Complex& a2)
{
	if ((a1.imaginary == a2.imaginary) && (a1.real == a2.real))
		return true;
	else
		return false;
}
ostream& operator <<(ostream& outputStream, const Complex& a)
{
	outputStream << "real: " << a.real << "\t";
	outputStream << "imaginary: " << a.imaginary << endl;
	return outputStream;
}
istream& operator >> (istream& inputStream, Complex& a)
{
	inputStream >> a.real;
	inputStream >> a.imaginary;
	return inputStream;
}