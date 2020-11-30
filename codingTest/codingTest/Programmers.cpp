#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = phone_number;
    for (int i = 0; i < phone_number.length(); i++)
    {
        if (i < phone_number.length() - 4)
        {
            answer[i] = '*';
        }
    }
    return answer;
}

int main()
{
    solution("01022253534");
    return 0;
}