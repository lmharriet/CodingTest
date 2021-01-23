#include<iostream>
#include<string>

using namespace std;

/*
알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서,
단어에 포함되어 있는 경우에는 처음 등장하는 위치를,
포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.


a b c d e f g h i j k l m n o p q r s t u v w x y z

 baekjoon

 012345 7 ( o가 두 번이고 처음 등장하는 위치는 5번 이므로 5를 사용)
*/

int FindAlphabet()

{
	string input;
	cin >> input;

	string alphabet = "abcdefghijklmnopqrstuvwxyz";

	int num[26] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	//input = baekjoon;

	for (int i = 0; i < alphabet.length(); i++)
	{
		for (int j = 0; j < input.length(); j++)
		{
			if (alphabet[i] == input[j])
			{
				if (num[i] != -1) continue;

				num[i] = j;
				break;
			}

		}

	}


	for (int i = 0; i < alphabet.length(); i++)
	{
		cout << num[i] << ' ';
	}


	return 0;
}