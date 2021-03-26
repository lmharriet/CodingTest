#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ConvertBinary(int num, int n)
{
	string binary = "";
	while (num > 0)
	{
		binary += to_string(num % 2);
		num /= 2;
	}

	if (binary.length() < n)
	{
		int len = n - binary.length();
		for (int i = 0; i < len; i++)
		{
			binary += '0';
		}
	}

	reverse(binary.begin(), binary.end());

	return binary;

}
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;
	string binary = "";
	string binary2 = "";

	for (int i = 0; i < n; i++)
	{
		binary = ConvertBinary(arr1[i], n);
		binary2 = ConvertBinary(arr2[i], n);

		for (int j = 0; j < n; j++)
		{
			if (binary[j] == '0' && binary2[j] == '0')
			{
				binary[j] = ' ';
				continue;
			}
			binary[j] = '#';
		}
		answer.emplace_back(binary);
	}

	return answer;
}

int main()
{
	solution(6, { 46, 33, 33 ,22, 31, 50 }, { 27 ,56, 19, 14, 14, 10 });
	return 0;
}
