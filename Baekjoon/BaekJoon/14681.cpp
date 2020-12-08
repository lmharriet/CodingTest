#include<iostream>
using namespace std;
//baekjoon 14681
int axis(int x, int y)
{
	int answer=0;
	//int axisX, axisY;
	//cin >> axisX>> axisY;

	cin >> x >> y;
	if (x > 0 && y > 0) answer = 1;//cout << "1";
	else if (x < 0 && y > 0) answer = 2;//cout << "2";
	else if (x < 0 && y < 0) answer = 3;// cout << "3";
	//else if (axisX > 0 && axisY < 0) cout << "4";
	else answer = 4;// cout << "4";

	return answer;
}