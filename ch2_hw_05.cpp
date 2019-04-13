/*
 * ch2_hw_05.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>

using namespace std;

int main(void)
{
	int T, O, G, D;
	int  sum = 0;


	
	for (T = 0;T <=9;T++) {
		for (O = 0;O <= 9;O++) {
			for (G = 0;G <= 9;G++) {
				for (D = 0;D <= 9;D++) {
if ((T * 100 + O * 10 + O) * 4 == G * 1000 + O * 100 + O * 10 + D) {
					if (G != T&&G != O&&G != D&&T != O&&T != D&&O != D) {
						
							sum = (T * 100 + O * 10 + O) * 4;
							cout << "TOO+TOO+TOO+TOO=GOOD\n";
							cout << "Sum=>" << sum << endl;
							cout << "T =" << T << endl;
							cout << "O =" << O << endl;
							cout << "G =" << G << endl;
							cout << "D =" << D << endl;


						}

					}
				}
			}
		}

	}


	system("pause");
	return 0;
}
