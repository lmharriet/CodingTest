#include <iostream>

using namespace std;

/*
�ִ�

9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���, ���� �ٸ� 9���� �ڿ���

3, 29, 38, 12, 57, 74, 40, 85, 61

�� �־�����, �̵� �� �ִ��� 85�̰�, �� ���� 8��° ���̴�.
*/
int maxNumber()
{
	int arr[9];
	int max = 0, position = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		if (i == 0) max = arr[0];
		if (max < arr[i])
		{
			max = arr[i];
			position = i;
		}

	}
	cout << max << '\n' << position + 1;
	return 0;
}
