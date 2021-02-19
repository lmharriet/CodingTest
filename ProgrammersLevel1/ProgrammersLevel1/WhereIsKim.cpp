#include<iostream>
#include<string>
#include <vector>

using namespace std;

string WhereKimIs(vector<string> seoul) {
    string answer = "김서방은 ";

    int size = seoul.size();
    for (int i = 0; i < size; i++)
    {
        if (seoul[i] == "Kim")
        {
            answer += to_string (i) + "에 있다";
            break;
        }
    }

    
    return answer;
}

//int main()
//{
//    cout << WhereKimIs({ "Jane","Kim" });
//}