#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{	
	string word;
	int alphabet[26] = { 0, };
	int max = 0;
	cin >> word;
	
	transform(word.begin(), word.end(),word.begin(), ::toupper);

	int size = word.length();
	for (int i = 0; i <size; i++)
	{
		alphabet[word[i] - 'A'] ++;
		cout << word[i] - 'A' << " : " <<alphabet[word[i] - 'A']<<'\n';
	}


	return 0;
}