/*
 * ch9_hw_04.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(void)
{
	string line;
	char ans;
	int count = 0;
	do {
		cout << "Enter a sentence and it will replace all four-letter words with'love'>\n";
		getline(cin, line);
		for (int i = 0;i < line.length();i++)
		{
			if (isalpha(line[i])) {                    //判斷是否為字母
				count++;
			}
			else {
				if (count == 4)
				{
					if (isupper(line[i - 4]))           //判斷是否為大寫
						line[i - 4] = 'L';
					else
						line[i - 4] = 'l';

					line[i - 3] = 'o';
					line[i - 2] = 'v';
					line[i - 1] = 'e';
				}
				count = 0;
			}

		}
		cout << line << endl;


		cout << "Enter 'y' to continue or any key word to quit>";
		cin >> ans;

		char clear;                              //clear buffer
		do {
			cin.get(clear);
		} while (clear != '\n');

	} while (ans == 'y' || ans == 'Y');






	system("pause");
	return 0;
}