/*
 * ch5_hw_10.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int main(void) {

	string flavor[5] = { "Chocolate","Vanilla ","Strawberry","Raspberry","Butterscotch" };
	int stock[5] = { 20,15,15,20,20 };
	int i, code, quantity, num=0, order[5][2] = { 0 };
	char choice;
	cout << "Code\t" << "Flavor\t\t" << "Quantity" << endl;
	do {
		for (i = 0;i < 5;i++) {
			cout << i + 1 << "\t" << flavor[i] << "\t" << stock[i] << endl;
		}cout << "------------------------------------" << endl;

		cout << "Enter the code of the flavor that you want to order>";
		cin >> code;
		if (code < 6 && code>0) {
			cout << "Enter the quantity>";
			cin >> quantity;
			stock[code - 1] -= quantity;
			if (stock[code - 1] < 0)
			{
				cout << "~Sorry,this is out of stock~" << endl;
				stock[code - 1] += quantity;
			}
			else
			{
				order[num][0] = code;     //num是訂單數量 num += 1就是訂單 + 1 不然你就覆蓋前一個訂單啦
				order[num][1] = quantity;
				num += 1;
			}
		}
		else
			cout << "Your input is wrong!\n";
		cout << "Do you want to buy anything else?(y/n)>";
		cin >> choice;
		cout << endl;
	} while (choice == 'y' || choice == 'Y');
	cout << "Your cart:\n";
	for (i = 0;i < num;i++) {
		cout << flavor[order[i][0] - 1] << "\t" << order[i][1] << endl;
	}
	system("pause");
	return 0;
}