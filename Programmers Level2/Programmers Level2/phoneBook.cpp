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
	//¹Ì¿Ï¼º
	int size = phone_book.size();

	sort(phone_book.begin(), phone_book.end(), compare);
	for (auto& it : phone_book)
	{
		cout << it << " , ";
	}

	cout << '\n';
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (phone_book[j].find(phone_book[i]) == 0)
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{
	//cout << solution({ "119", "97674223", "1195524421" }) << '\n';
	//cout << solution({ "123","456","789" })<<'\n';
	//cout << solution({ "12","123","1235","567","88" })<<'\n';
	cout << solution({ "123", "456", "4567", "999" }) << '\n';
	return 0;
}