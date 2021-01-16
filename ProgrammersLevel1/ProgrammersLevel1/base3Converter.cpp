#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
자연수 n이 매개변수로 주어집니다.
n을 3진법 상에서 앞뒤로 뒤집은 후, 이를 다시 10진법으로 표현한 수를 return 하도록
solution 함수를 완성해주세요.

예

45 -> 1200(3진법)->0021 (뒤집기) -> 10진법

45를 3으로 나눈다. 나머지를 뒤에서부터 적어준다
*/

int base3Converter(int n)
{
	int answer = 0;
	int number = n;
	int remain = 0;

	vector<int> vBase;

	while (number)
	{
		remain = number % 3;
		vBase.push_back(remain);
		number /= 3;

	}

	int size = vBase.size() - 1;

	for (int i = 0; i < vBase.size(); i++)
	{
		answer += vBase[i] * pow(3, size);
		size--;
	}
	return answer;
}
