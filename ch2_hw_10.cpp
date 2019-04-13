/*
 * ch2_hw_10.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(void) {
	string sentence;
	fstream inputstream;
	inputstream.open("text.txt");
	getline(inputstream, sentence);
	int p = sentence.find("hate");
	while (p < string::npos) {
		sentence.replace(p, 4, "love");
		p = sentence.find("hate", p++);
	}

	cout << sentence << endl;

	inputstream.close();

	system("pause");
	return 0;
}
