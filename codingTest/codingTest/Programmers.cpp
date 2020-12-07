#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;

    string str = to_string(n);

    //for(int i = 0; i < max; i++)

    //"12345" length = 5


    for (int i = str.length()-1; i >= 0; i--)
    {
        int result = str[i] - '0';

        answer.push_back(result);
    }
    return answer;
}

int main()
{
    vector<int> v1 = solution(12345);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i];
    }

    return 0;
}