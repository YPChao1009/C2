/*
 * ch5_hw_14.cpp
 * Author:Yun Pei Chao 
 */
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

double nearestNeighbor(int reviewRaing[], int usrRa[], int usrRaMo[]);
int findMinInd(double ar[], int n);

int main(void)
{
	int reviews[4][6] = {{3, 1, 5, 2, 1, 5},
						 {4, 2, 1, 4, 2, 4},
						 {3, 1, 2, 4, 4, 1},
						 {5, 1, 4, 2, 4, 2}},
		reviewer[4] = {0, 1, 2, 3},
		movie[6] = {100, 101, 102, 103, 104, 105},
		userRating[3],
		userRatingMovie[3],
		closeInd;
	double	distanceOfRating[4];
	
	cout << "Enter any three movie that you want to rate:\n";
	for (int i = 0; i < 3; i++)
	{
		while (true)
		{
			if (!(cin >> userRatingMovie[i]) || userRatingMovie[i] < 100 || userRatingMovie[i] > 105)
			{
				cout << "Please enter the movie from 100 to 105!\n";
				cin.clear();
				cin.ignore(10000, '\n');
			}
			else
			{
				break;
			}
		}
	}

	cout << "Rating the movie that you chose.(1 (terrible) to 5 (excellent))\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Movie " << userRatingMovie[i] << ": ";
		while (true)
		{
			if (!(cin >> userRating[i]) || userRating[i] < 1 || userRating[i] > 5)
			{
				cout << "Please enter the rating for movie from 1 to 5.\n";
				cin.clear();
				cin.ignore(10000, '\n');
			}
			else
			{
				break;
			}
		}
	}
	
	for (int i = 0; i < 4; i++)
	{
		distanceOfRating[i] = nearestNeighbor(reviews[i], userRating, userRatingMovie);
	}

	closeInd = findMinInd(distanceOfRating, 4);

	cout << "Your rating is close to the reviewr " << reviewer[closeInd]
		 << " and you may interest in the other movies by reviewer's rating:\n";

	for (int i = 0; i < 6; i++)
	{
		if (i != (userRatingMovie[0] % 100) && i != (userRatingMovie[1] % 100) && i != (userRatingMovie[2] % 100))
		{
			cout << "a rating of " << reviews[closeInd][i] << " for movie " << movie[i] << ", ";
		}
	}

	system("pause");
	return (0);
}

double nearestNeighbor(int reviewRaing[], int usrRa[], int usrRaMo[])
{
	double distance, diff[3];

	for (int i = 0; i < 3; i++)
	{
		diff[i] = abs(reviewRaing[usrRaMo[i] % 100] - usrRa[i]);
	}

	distance = sqrt((diff[0] * diff[0]) + (diff[1] * diff[1]) + (diff[2] * diff[2]));

	return (distance);
}

int findMinInd(double ar[], int n)
{
	int index = 0;

	for (int i = 1; i < n; i++)
	{
		if (ar[i] < ar[index])
		{
			index = i;
		}
	}

	return (index);
}
