//This program generates 50,000 randum integers between 1 and 6 then prints
//the amount of each number generated to the screen.
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int oneCount = 0;
int twoCount = 0;
int threeCount = 0;
int fourCount = 0;
int fiveCount = 0;
int sixCount = 0;
int randNum;

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 50000; i++)
	{
		randNum = rand() % 6 + 1;
		if (randNum == 1)
			oneCount++;
		else if (randNum == 2)
			twoCount++;
		else if (randNum == 3)
			threeCount++;
		else if (randNum == 4)
			fourCount++;
		else if (randNum == 5)
			fiveCount++;
		else if (randNum == 6)
			sixCount++;
	}
	cout << "Generating random integers from 1 to 6..." << endl;
	cout << "Ones generated: " << oneCount << endl;
	cout << "Twos generated: " << twoCount << endl;
	cout << "Threes generated: " << threeCount << endl;
	cout << "Fours generated: " << fourCount << endl;
	cout << "Fives generated: " << fiveCount << endl;
	cout << "Sixes generated: " << sixCount << endl;
	cout << "Total nnumbers generated: " << (oneCount + twoCount + threeCount + fourCount + fiveCount + sixCount) << endl;
	system("pause");
	return 0;
}
