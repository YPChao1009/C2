/*
 * ch3_hw_11.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<ctime>
using namespace std;

int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);

int main()
{
	int HTS = 0, CTS = 0;
	bool flag = 0;
	char word;

	cout << "**********Pig**********" << endl << endl << "'r'=ROLL AGAIN,'h'=HOLD" << endl << endl << "Please enter 'r'>";
	cin >> word;
	if (word == 'r')
	{
		while (HTS < 100 && CTS < 100)
		{
			HTS += humanTurn(0);
			cout << "Now your score is " << HTS << "." << endl << endl;
			if (HTS >= 100)
			{
				flag = 1;
				cout << "You win!!!!";
			}
			if (!flag)
			{
				CTS += computerTurn(0);
				cout << "Now my score is " << CTS << "." << endl << endl;
			}
			if (CTS >= 100)
				cout << "You lose~ hahaha";
		}
	}
	else
		cout << "Your input is wrong.";

	system("pause");
	return 0;
}

int humanTurn(int humanTotalScore)
{
	srand(time(NULL));
	int roll = (rand() % 6) + 1;
	char choose;
	humanTotalScore += roll;
	cout << "Your points is " << roll << "." << endl;
	if (roll == 1)
		return 0;
	else
	{
		cout << "Choose 'r' or 'h'>";
		cin >> choose;
		if (choose == 'r')
		{
			cout << "ROLL AGAIN" << endl;
			humanTurn(humanTotalScore);
		}
		else
		{
			cout << "HOLD" << endl;
			return humanTotalScore;
		}
	}
}

int computerTurn(int computerTotalScore)
{
	srand(time(NULL));
	int roll = (rand() % 6) + 1;
	computerTotalScore += roll;
	cout << "My points is " << roll << "." << endl;
	if (roll == 1)
		return 0;
	else
	{
		if (computerTotalScore < 20)
		{
			cout << "ROLL AGAIN" << endl;
			computerTurn(computerTotalScore);
		}
		else
		{
			cout << "HOLD" << endl;
			return computerTotalScore;
		}
	}
}