/*
 * ch4_hw_16.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void getHighScore(string &firstname, int &firstscore);

int main(void)
{
	string name;
	int score;
	

		getHighScore(name, score);

cout << name << " gets the highest score,and his score is " << score << endl;
	
	
	system("pause");
	return 0;
}
void getHighScore(string &firstname, int &firstscore)
{
	string name;
	int score;
	fstream inputstream;
	inputstream.open("scores.txt");
	int highscore=0;
	firstscore = highscore;
	while (inputstream >> name)
	{
		inputstream >> score;
		if (score > firstscore) {
			firstscore = score;
			firstname = name;
		}
	}
	
inputstream.close();
}