#include <iostream>
#include <vector>
using namespace std;

int arr1[2972];

bool PrimeNums(int num)
{
	for (int i = 2; i <= num; i++)
	{
		arr1[i] = i;
	}
	for (int i = 2; i <= num; i++)
	{
		if (arr1[i] == 0) continue;
		for (int j = i * 2; j <= num; j += i)
		{
			arr1[j] = 0;
		}
	}

	if (arr1[num] != 0) return true;

	return false;
}
int solution(vector<int> nums) {
	int answer = 0;
	for (int i = 0; i < nums.size() - 2; i++)
	{
		for (int j = i + 1; j < nums.size() - 1; j++)
		{
			for (int k = j + 1; k < nums.size(); k++)
			{
				if (PrimeNums(nums[i] + nums[j] + nums[k]))
				{
					answer++;
				}
			}
		}
	}

	return answer;
}

int main()
{
	////997 + 991+ 983 = 2971
	//cout << "985:"<<PrimeNums(985)<<'\n';
	//cout << "984:"<<PrimeNums(984)<<'\n';
	//cout << "983:"<<PrimeNums(983)<<'\n';
	//cout << "982:"<<PrimeNums(982)<<'\n';
	//cout << "981:"<<PrimeNums(981)<<'\n';
	//cout << "980:"<<PrimeNums(980)<<'\n';
	//cout << "979:"<<PrimeNums(979)<<'\n';
	//cout << solution({ 1, 2, 3, 4 }) << '\n';
	//cout << solution({ 1,2,7,6,4 });


	solution({ 1, 2, 3, 4 });
	return 0;
}