#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool solution(vector<string> phone_book) {
	string checkNumber = "";
	unordered_map<string, int> m;

	for (int i = 0; i < phone_book.size(); i++)
	{
		m[phone_book[i]] = 1;
	}
	for (int i = 0; i < phone_book.size(); i++)
	{
		for (int j = 0; j < phone_book[i].size(); j++)
		{
			checkNumber += phone_book[i][j];
			if (m[checkNumber] && checkNumber != phone_book[i])
			{
				//cout << "checkNumber: " << checkNumber << '\n';
				//cout << "phone_book[i]: " << phone_book[i] << '\n';
				return false;
			}
		}
		checkNumber.clear();
	}

	return true;
}
//int main()
//{
//	Phone_book({ "119", "97674223", "1195524421" }) << '\n';
//	Phone_book({ "112","44","4544" }) << '\n';
//	Phone_book({ "123","456","789" }) << '\n';
//	Phone_book({ "12","123","1235","567","88" }) << '\n';
//	Phone_book({ "123", "456", "4567", "999" }) << '\n';
//
//
//	/*
//	cout << "0: " << 
//	cout << "1: " << 
//	cout << "1: " << 
//	cout << "0: " << 
//	cout << "0: " << 
//	*/
//	return 0;
//}