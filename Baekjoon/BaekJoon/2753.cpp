#include<iostream>

using namespace std;

//baekjoon 2753

void LeapYear()
{
	bool isLeapYear;
	int year;
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400==0)
	{
		isLeapYear = true;
	}
	else isLeapYear = false;

	cout << isLeapYear;
}



	
