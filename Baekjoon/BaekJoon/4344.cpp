#include <iostream>
#include <vector>

using namespace std;

/*
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.
ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.
��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N�� ù ���� �־�����,
�̾ N���� ������ �־�����. ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.
*/
int aboutAVR()
{
	int C, N;
	cin >> C;

	cout << fixed;
	cout.precision(3);

	float* output = new float[C];

	for (int i = 0; i < C; i++)
	{
		int count = 0;
		float sum = 0.0f;

		cin >> N;
		int* arr = new int[N];
		for (int j = 0; j < N; j++)// '��' //??? //`0��
		{
			cin >> arr[j];
			sum += arr[j];
		}

		//��� = ��� �� / ���� ok?
		float avr = sum / N;

		for (int k = 0; k < N; k++)
		{
			if (arr[k] > avr)
			{
				count++;
			}

		}

		output[i] = (float)count / N * 100;
		
	}

	for (int i = 0; i < C; i++)
	{
		cout << output[i] << "%" << '\n';
	}
	return 0;
}

