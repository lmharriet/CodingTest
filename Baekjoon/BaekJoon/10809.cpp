#include<iostream>
#include<string>

using namespace std;

/*
���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. ������ ���ĺ��� ���ؼ�,
�ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��,
���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.


a b c d e f g h i j k l m n o p q r s t u v w x y z

 baekjoon

 012345 7 ( o�� �� ���̰� ó�� �����ϴ� ��ġ�� 5�� �̹Ƿ� 5�� ���)
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