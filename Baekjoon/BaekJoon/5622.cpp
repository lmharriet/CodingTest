#include <iostream>
#include <string>

using namespace std;

int dialNumber()
{
	string input;
	string dialStr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//A B C D E F G H I J K L M N O P Q R S T U V  W  X  Y  Z
	//3 3 3 4 4 4 5 5 5 6 6 6 7 7 7 8 8 8 8 9 9 9 10 10 10 10

	int dial[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int sum = 0;

	cin >> input;
	int inputSize = input.length();
	for (int i = 0; i < inputSize; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (input[i] == dialStr[j]) 
			{
				sum += dial[j];
				break;
			}

		}
	}

	cout << sum;

	return 0;
}
