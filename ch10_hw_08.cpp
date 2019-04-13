/*
 * ch10_hw_08.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

class Television {
public:
	Television(string type, double size, string* a);
	Television(const Television& input);

	string getType();
	double getDimension();
	string* getConnectivity();
	int getObject();
	void setObject(int o);
	void showData();
private:
	string displayType;
	double dimension;
	string* ConnectivitySupport;
	int used;
};
int main(void)
{
	int num;
	string type;
	double inch;
	string *connectivity;

	cout << "Enter the number of the televisions>";
	cin >> num;
	connectivity = new string[num];

	cout << "Enter your display type>";
	cin >> type;
	cout << "Enter the dimension in inches>";
	cin >> inch;

	for (int i = 0;i < num;i++) {
		cout << "Enter the NO." << i + 1 << " connectivity suport:";
		cin >> connectivity[i];
	}

	Television user(type, inch, connectivity);
	user.setObject(num);
	Television copy(user);

	cout << "Your data:\n";
	copy.showData();


	system("pause");
	return 0;
}

Television::Television(string type, double size, string * a)
	:displayType(type), dimension(size), ConnectivitySupport(a)
{
}

Television::Television(const Television& input)
	: displayType(input.displayType), dimension(input.dimension), used(input.used)
{
	delete[] ConnectivitySupport;
	ConnectivitySupport = new string[used];
	for (int i = 0; i < used; i++)
		ConnectivitySupport[i] = input.ConnectivitySupport[i];
}

string Television::getType()
{
	return displayType;
}

double Television::getDimension()
{
	return dimension;
}

string*  Television::getConnectivity()
{
	return ConnectivitySupport;
}

int Television::getObject()
{
	return used;
}

void Television::setObject(int o)
{
	used = o;
}

void Television::showData()
{
	cout << "The display type is>" << displayType << endl;
	cout << "The dimension is>" << dimension << endl;
	for (int i = 0;i < used;i++)
		cout << "The NO " << i + 1 << ". ConnectivitySupport is " << ConnectivitySupport[i] << endl;
}
