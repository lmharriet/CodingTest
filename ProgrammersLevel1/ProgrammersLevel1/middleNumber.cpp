#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
가운데 글자 가져오기

단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요. 단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.

제한사항
s는 길이가 1 이상, 100이하인 스트링입니다.
*/

string solution(string s) {
    string answer = "";
    int len = s.length();

    if (len % 2 == 0)
    {
        answer += s[len / 2 - 1];
        answer += s[len / 2];
    }
    else
    {
        answer = s[len / 2];
    }

    return answer;
}