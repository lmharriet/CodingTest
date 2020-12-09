#include <iostream>

using namespace std;

/*
최댓값

9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.

예를 들어, 서로 다른 9개의 자연수

3, 29, 38, 12, 57, 74, 40, 85, 61

이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.
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
