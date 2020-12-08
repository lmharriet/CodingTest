#include <iostream>
#include <string>
#include <vector>

using namespace std;
//
vector<int> solution(long long n) {
    vector<int> answer;

    while (n > 0)
    {
        int fnum = n % 10;
        n /= 10;

        answer.push_back(fnum);
    }

    return answer;
}

//int main()
//{
//    vector<int> v1 = solution(12345);
//
//    for (int i = 0; i < v1.size(); i++)
//    {
//        cout << v1[i];
//    }
//
//    return 0;
//}