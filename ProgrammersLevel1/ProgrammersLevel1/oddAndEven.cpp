#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int num) {
    string even = "Even";
    string odd = "Odd";
    if (num % 2 == 0) return even;
    else return odd;
}