#include <iostream>
#include <string>

using namespace std;

/*
���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, 
�� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. 
��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.


ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����Ѵ�. 
��, ���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ?�� ����Ѵ�.
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