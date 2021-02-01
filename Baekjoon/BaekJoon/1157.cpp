#include <iostream>
#include <string>

using namespace std;

/*
알파벳 대소문자로 된 단어가 주어지면, 
이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 
단, 대문자와 소문자를 구분하지 않는다.


첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 
단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
*/
int StudyVoca()
{
	string word;
	int alphabet[26] = { 0, };
	int max = 0;
	int index = 0;
	int count = 0;

	cin >> word;


	int size = word.length();
	for (int i = 0; i < size; i++)
	{
		if (word[i] >= 97)
		{
			alphabet[word[i] - 'a'] ++;
		}
		else if (word[i] <= 90 && word[i] < 97)
		{
			alphabet[word[i] - 'A']++;
		}

	}

	max = alphabet[0];
	for (int i = 1; i < 26; i++)
	{
		if (alphabet[i] > max)
		{
			max = alphabet[i];
			index = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (i == index) continue;
		if (max == alphabet[i])
			count++;
	}


	if (count > 0) cout << '?';
	else cout << (char)(index + 'A');

	return 0;
}