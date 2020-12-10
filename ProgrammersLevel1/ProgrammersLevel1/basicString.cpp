#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
문자열 다루기 기본

문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 
예를 들어 s가 a234이면 False를 리턴하고 1234라면 True를 리턴하면 됩니다.

제한 사항
s는 길이 1 이상, 길이 8 이하인 문자열입니다.*/
bool BackString(string s) {

	bool answer = true;

	if (s.size() == 6 || s.size() == 4)
	{
		for (int i = 0; i < s.size(); i++)
		{
			int asc = (int)s[i];

			if ((asc >= 48 && asc <= 57) == false)
			{
				return false;
			}
		}
		return true;
	}

	return false;
}