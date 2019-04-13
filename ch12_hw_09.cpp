/*
 * ch12_hw_09.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
	ifstream fin;
	ofstream fout;

	fin.open("ch12_hw_09-infile.txt");
	fout.open("ch12_hw_09-outfile.html");
	
	fout << "<PRE>\n";
	char next;
	fin.get(next);
	while (!fin.eof())
	{
		if (next == '<')
			fout << "&It;";
		else if (next == '>')
			fout << "&gt;";
		else
			fout << next;
		fin.get(next);
	}

		fout << "</PRE>\n";
	fin.close();
	fout.close();

	system("pause");
	return 0;
}