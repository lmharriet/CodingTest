#include <iostream>
#include <string>
using namespace std;

/*
���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ P�� ����� �ȴ�.
S���� QR Code "alphanumeric" ���ڸ� ����ִ�.

QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: �̴�.*/

int RepeatStr()
{
	int T, R;
	string S;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> R >> S;


		for (int j = 0; j < S.length(); j++)
		{
			for (int k = 0; k < R; k++)
			{
				cout << S[j];

			}
		}
		cout << "\n";
	}

	
	return 0;
}