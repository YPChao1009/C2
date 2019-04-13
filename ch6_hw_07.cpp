/*
 * ch6_hw_07.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<cstdlib>
using namespace std;

class Pizza
{
public:
	void outputDescription();
	double computePrice();
	
	int gettype();
	int getsize();
	
	int gettopping();
	int gettoppingNumber();
	void set(int t, int s,int p,int n);

private:
	int type;
	int size;
	int topping;
	int toppingNumber;

};


int main(void)
{
	Pizza customer;
	cout << "*****Pizza*****\n";
	customer.outputDescription();
	cout << "Your pizza is "<<customer.computePrice() << " dollars.\n";
	


	system("pause");
	return 0;
}
void Pizza::outputDescription()
{
	cout << "**Type:\n";
	cout << "1:deep dish   2:hand tossed   3:pan\n";
	cout << "**Size:\n";
	cout << "1:small       2:medium        3.large\n";
	cout << "**Topping:\n";
	cout << "1:pepperoni   2:cheese\n";
	cout << "--------------------------------------\n";
}

double Pizza::computePrice()
{ 
	int value1;
	cout << "Choose the type of your pizza>";
	cin >> type;
	cout << "Choose the size of your pizza>";
	cin >> size;
	if (size == 1)
	{
		value1 = 10;
	}
	else if (size == 2)
	{
		value1 = 14;
	}
	else if (size == 3)
	{
		value1 = 17;
	}
	cout << "Choose a type of topping that you want>";
	cin >> topping;
	cout << "How many toppings that you want>";
	cin >> toppingNumber;

	return(value1 += (2 * toppingNumber));
	if (type > 3 || type < 1 || size>3 || size < 1 || topping>2 || topping < 1 || toppingNumber < 0)
	{
		cout << "Your input is wrong!\n";
		exit(1);
	}
}
int Pizza::gettype()
{
	return type;
}
int Pizza::getsize()
{
	return size;
}
int Pizza::gettopping()
{
	return topping;
}
int Pizza::gettoppingNumber()
{
	return toppingNumber;
}
void Pizza::set(int t, int s, int p, int n)
{
	if (t <= 3 && t >= 1)
		type = t;
	else {
		cout << "Your input is wrong!\n";
		exit(1);
	}
	if (s <= 3 && s >= 1)
	size = s;
	else {
		cout << "Your input is wrong!\n";
		exit(1);
	}
	if (p <= 2 && p >= 1)
	topping = p;
	else {
		cout << "Your input is wrong!\n";
		exit(1);
	}
	if(n>0)
	toppingNumber = n;
	else {
		cout << "Your input is wrong!\n";
		exit(1);
	}
}