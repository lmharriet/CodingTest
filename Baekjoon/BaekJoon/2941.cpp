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

int main()
{
	string input;
	string alphabet[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	vector<string> vAlphabet;
	cin >> input;

	for (int i = 0; i < 8; i++)
	{
		if (input.find(alphabet[i]) != -1)
		{
			vAlphabet.push_back(alphabet[i]);
		}
		cout << alphabet[i][0]<<'\n';
	}

	cout << vAlphabet.size();
	return 0;
}
