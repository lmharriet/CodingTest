#include <iostream>

using namespace std;

/*
���
�����̴� �⸻��縦 ���ƴ�. �����̴� ������ �����ؼ� ���� ��������� �ߴ�.
�ϴ� �����̴� �ڱ� ���� �߿� �ִ��� �����. �� ���� M�̶�� �Ѵ�.
�׸��� ���� ��� ������ ����/M*100���� ���ƴ�.

���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50/70*100�� �Ǿ� 71.43���� �ȴ�.

�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
float newAverrage()
{
	int N;
	int M = 0;
	float averrage = 0;
	cin >> N;

	float* arr = new float[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];

		if (i == 0) M = arr[0];
		else if (arr[i] > M) M = arr[i]; 

	}

	for (int i = 0; i < N; i++)
	{
		arr[i] = arr[i] / M * 100;
		averrage += arr[i];
	}

	//cout << averrage / N;

	return averrage / N;
}