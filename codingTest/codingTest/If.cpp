#include<iostream>

using namespace std;

int main()
{
	//baekjoon 1330

	//int A,B;
	//cin >> A>> B;

	//if (A > B) cout << ">";
	//else if (A < B) cout << "<";
	//else cout << "==";

	//baekjoon 9498

	//int score;
	//cin >> score;
	//if (score >= 90) cout << "A";
	//else if (score >= 80) cout << "B";
	//else if (score >= 70) cout << "C";
	//else if (score >= 60) cout << "D";
	//else cout << "F";


	//baekjoon 2753

	/*bool isLeapYear;
	int year;
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400==0)
	{
		isLeapYear = true;
	}
	else isLeapYear = false;

	cout << isLeapYear;*/


	//baekjoon 14681

	//int axisX, axisY;
	//cin >> axisX>> axisY;

	//if (axisX > 0 && axisY > 0) cout << "1";
	//else if (axisX < 0 && axisY > 0) cout << "2";
	//else if (axisX < 0 && axisY < 0) cout << "3";
	////else if (axisX > 0 && axisY < 0) cout << "4";
	//else cout << "4";


	//baekjoon 2884

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