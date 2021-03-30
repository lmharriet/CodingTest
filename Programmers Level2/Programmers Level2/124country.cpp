#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
	string answer = "";

	while (n > 0)
	{
		if (n % 3 == 0)
		{
			answer += "4";
			n = (n-1) /3 ;
		}
		else
		{
			answer += to_string(n % 3);
			n /= 3;
		}
	}
	reverse(answer.begin(),answer.end());
	return answer;
}

int main()
{
	cout <<"10진수:3"<<"->"<<"124나라의 숫자:" << solution(3)<<'\n';
	cout <<"10진수:4"<<"->"<<"124나라의 숫자:" << solution(4)<<'\n';
	cout <<"10진수:5"<<"->"<<"124나라의 숫자:" << solution(5)<<'\n';
	cout <<"10진수:6"<<"->"<<"124나라의 숫자:" << solution(6)<<'\n';
	cout <<"10진수:7"<<"->"<<"124나라의 숫자:" << solution(7)<<'\n';
	cout <<"10진수:8"<<"->"<<"124나라의 숫자:" << solution(8)<<'\n';
	cout <<"10진수:9"<<"->"<<"124나라의 숫자:" << solution(9)<<'\n';
	return 0;
}