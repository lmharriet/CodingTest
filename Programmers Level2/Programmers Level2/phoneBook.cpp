#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
	return a.length() < b.length();
}
bool solution(vector<string> phone_book) {
	//not finished yet (this was falied because of time over)
	bool answer = true;

	sort(phone_book.begin(), phone_book.end(), compare);

	for (int i = 0; i < phone_book.size(); i++)
	{
		for (int j = 0; j < phone_book.size(); j++)
		{
			if (i == j) continue;
			if (phone_book[j].find(phone_book[i]) != -1)
			{
				if ((phone_book[j].find(phone_book[i]) == 0))
				{
					answer = false;
					break;
				}
			}
		}
	}
	return answer;
}
int main()
{
	cout << "0: " << solution({ "119", "97674223", "1195524421" }) << '\n';
	cout << "1: " << solution({ "112","44","4544" }) << '\n';
	cout << "1: " << solution({ "123","456","789" }) << '\n';
	cout << "0: " << solution({ "12","123","1235","567","88" }) << '\n';
	cout << "0: " << solution({ "123", "456", "4567", "999" }) << '\n';

	return 0;
}