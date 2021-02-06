#include <iostream>
#include <string>
using namespace std;
/*
영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다.
이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오.
단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.
*/

int CountWord()
{

	string input;
	int empty = 0;
	int count = 0;
	int result;

	getline(cin, input);

	int prev = 0, next = 0;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
		{
			empty++;
		}
	}

	if (empty != input.length())

	{
		for (int i = 1; i < input.length() - 1; i++)
		{
			if (input[i] == ' ')
			{
				prev = i - 1;
				next = i + 1;
				if (input[prev] != ' ' && input[next] != ' ')
				{
					count++;
				}
			}



		}
		cout << count + 1;
	}
	else
	{
		cout << 0;
	}


	return 0;
}