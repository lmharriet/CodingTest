#include <vector>
#include <iostream>
using namespace std;

vector<int> DisContinuityNum(vector<int> arr)
{
    vector<int> answer;
    int num = arr[0];
    answer.emplace_back(num);
    
    int size = arr.size();

    for (int i = 1; i < size; i++)
    { 
        if (num == arr[i])
        {
            continue;
        }
        else 
        {
            num = arr[i];
            answer.emplace_back(num);
        }
    }

    return answer;
}
//int main()
//{
//    solution({ 4,4,4,3,3}); // 1 3 0 1
//
//    return 0;
//}