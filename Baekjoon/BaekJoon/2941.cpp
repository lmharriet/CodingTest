#include <iostream>
#include <string>
#include <vector>
/*
�������� �ü������ ũ�ξ�Ƽ�� ���ĺ��� �Է��� ���� ������.
����, ������ ���� ũ�ξ�Ƽ�� ���ĺ��� �����ؼ� �Է��ߴ�.
���� ���, ljes=njak�� ũ�ξ�Ƽ�� ���ĺ� 6���� �̷���� �ִ�.
�ܾ �־����� ��, �� ���� ũ�ξ�Ƽ�� ���ĺ����� �̷���� �ִ��� ����Ѵ�.

 ��Ͽ� ���� ���ĺ��� �� ���ھ� ����.
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

		int num = input.find(alphabet[i]); // �ε����� ������ d  2

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