#include <iostream>
#include <string>
#include <vector>
/*
예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다.
따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.
예를 들어, ljes=njak은 크로아티아 알파벳 6개로 이루어져 있다.
단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

 목록에 없는 알파벳은 한 글자씩 센다.
*/
using namespace std;

int CroatiaAlphabet()
{
	string input;
	string alphabet[] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };


	int count = 0;
	cin >> input;


	for (int i = 0; i < 8; i++)
	{	//   0123456789 // -1
		// {"ts!as!as!a"}.find("as"); 3

		int num = input.find(alphabet[i]); // 인덱스를 리턴함 d  2

		while (num != -1)
		{
			input.replace(num, alphabet[i].size(), "!");
			count++;

			num = input.find(alphabet[i]);
		}
	}

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] != '!')
		{
			count++;
		}
	}


	cout << count;

	return 0;
}