#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}
int solution(vector<int> A, vector<int> B)
{
    int answer = 0,size=A.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(),compare);
    for (int i = 0; i < size; i++)
    {
        answer += A[i] * B[i];
    }

    return answer;
}

int main()
{
    cout << solution({1,2}, {3,4});
    return 0;
}