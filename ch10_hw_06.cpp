/*
 * ch10_hw_06.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

class DynamicStringArray {
public:
	DynamicStringArray();
	DynamicStringArray(const DynamicStringArray &input);
	DynamicStringArray(int S, string *D);
	DynamicStringArray operator=(DynamicStringArray data);
	int getSize() const;
	void addEntry(string input);
	bool deleteEntry(string input);
	
	string getEntry(int index);
	~DynamicStringArray();
	void showData();
private:
	
	string *dynamicArray;
	int size;

};
int main(void)
{
	int size=0,index=0;
	string *dynamicArray;
	string input;

	cout << "Enter how many entries you want to place in the vector>";
	cin >> size;
	dynamicArray = new string[size];

	for (int i = 0;i < size;i++) {
		cout << "Vector[" << size << "]=";
		cin >> dynamicArray[i];
	}

	DynamicStringArray user(size, dynamicArray);
	user.showData();

	cout << "Add something to the vector[" << size << "]=";
	cin >> input;
	user.addEntry(input);
	user.showData();

	cout << "Enter which do you want to delete>";
	cin >> input;
	if (user.deleteEntry(input))
		user.showData();
	else
		cout << "The string does not exist.\n";

	cout << "Enter the index>";
	cin >> index;
	cout << "The entry in vector[" << index << "] is" << user.getEntry(index) << ".\n";

	DynamicStringArray copy(user);
	copy.showData();
	system("pause");
	return 0;
}
DynamicStringArray::DynamicStringArray()
	:size(0),dynamicArray(nullptr)
{
}

DynamicStringArray::DynamicStringArray(const DynamicStringArray & input)
	{
	size = input.size;
	delete[] dynamicArray;
	dynamicArray = new string[size];
	for (int i = 0;i < size;i++)
		dynamicArray[i] = input.dynamicArray[i];
}

DynamicStringArray::DynamicStringArray(int S, string * D)
	:size(S),dynamicArray(D)
{
}

DynamicStringArray DynamicStringArray::operator=(DynamicStringArray data)
{
	size = data.size;
	delete[] dynamicArray;
	dynamicArray = new string[size];
	for (int i = 0;i < size;i++)
		dynamicArray[i] = data.dynamicArray[i];
		return DynamicStringArray();
}

int DynamicStringArray::getSize() const
{
	return size;
}

void DynamicStringArray::addEntry(string input)
{
	string *newArray = new string[size + 1];
	for (int i = 0;i < size;i++)
		newArray[i] = dynamicArray[i];
	newArray[size] = input;
	size++;
	delete[] dynamicArray;
	dynamicArray = new string [size];
	for (int i = 0;i < size;i++)
		  dynamicArray[i]=newArray[i];
}

bool DynamicStringArray::deleteEntry(string input)
{
	for (int i = 0;i < size;i++) {
		if (dynamicArray[i] == input) {
			string *newArray = new string[size-1];
			for (int j = 0;j < i;j++)
				newArray[j] = dynamicArray[j];
			for (int j = i+1;j < size;j++)
				newArray[j-1] = dynamicArray[j];
			delete[] dynamicArray;
			size--;
			dynamicArray = new string [size];
			for (int i = 0;i < size;i++)
				dynamicArray[i] = newArray[i];
			return true;
		}
	}
	return false;
}

string DynamicStringArray::getEntry(int index)
{
	if (index >= size)
		return nullptr;
		return dynamicArray[index];
}

DynamicStringArray::~DynamicStringArray()
{
	delete[] dynamicArray;
}

void DynamicStringArray::showData()
{
	cout << "Now the vector is\n";
	for (unsigned int i = 0;i < size;i++)
		cout << i << ". " << dynamicArray[i] << endl;
}
