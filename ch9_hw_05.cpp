/*
 * ch9_hw_05.cpp
 * Author:Yun Pei Chao 
 */
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	int count = 0,  //count how many letter words
		index = 0;	//used for input subscript
	string input;	//store the input data
	cout << "Enter a sentence =>";		//promput the user enter the data
	getline(cin, input);				//store the data into input - string type 

	//replace "him" with "her or him"
	while (input[index] != '\n'&&index<input.length()) {
		if (isalpha(input[index])) {	
			count++;
			index++;
		}
		else {
			if (count == 3 && (input[index - 3] == 'h' || input[index - 3] == 'H') && input[index - 2] == 'i'&&input[index - 1] == 'm') {
				if (isupper(input[index - 3])) {
					input.insert(index - 3, "Her or ");
					input[index + 4] = 'h';
				}
				else
					input.insert(index - 3, "her or ");
				index += 6;		//after replace, the index will continue to index
			}
			index++;	
			count = 0;		//initial the count to 0 to count how many letter words again
		}
	}

	//replace "he" with "she or he " and initial the index and count.
	index = 0; count = 0;
	while (input[index] != '\n'&&index < input.length()) {
		if (isalpha(input[index])) {
			count++;
			index++;
		}
		else {
			if (count == 2 && (input[index - 2] == 'h' || input[index - 3] == 'H') && input[index - 1] == 'e') {
				if (isupper(input[index - 2])) {
					input.insert(index - 2, "She or ");
					input[index + 3] = 'h';
				}
				else
					input.insert(index - 2, "she or ");
				index += 6;		//after replace, the index will continue to index+6
			}
			index++;
			count = 0;		//count if the two-letter words
		}
	}
	//show the result
	cout << input << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}