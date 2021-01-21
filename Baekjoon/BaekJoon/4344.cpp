#include <iostream>
#include <vector>

using namespace std;

/*
대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.
첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
둘째 줄부터 각 테스트 케이스마다 학생의 수 N이 첫 수로 주어지고,
이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
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
		for (int j = 0; j < N; j++)// 'ㅇ' //??? //`0′
		{
			cin >> arr[j];
			sum += arr[j];
		}

		//평균 = 모든 값 / 갯수 ok?
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

