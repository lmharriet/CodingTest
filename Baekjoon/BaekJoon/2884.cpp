#include<iostream>

using namespace std;
//baekjoon 2884

int alarm()
{
	int H, M;
	cin >> H >> M;

	if (M < 45)
	{
		H -= 1;
		M += 15;
	}
	else M -= 45;

	if (H < 0) H = 23;

	cout << H << " " << M;

	return 0;
}