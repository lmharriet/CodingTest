#include <iostream>
#include <string>

using namespace std;

bool SameCount(string s)
{
	bool answer = true;
	int pCount = 0;
	int yCount = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'P' || s[i] == 'p')
		{
			pCount++;
		}
		else if (s[i] == 'Y' || s[i] == 'y')
		{
			yCount++;
		}
	}
	
	if (pCount - yCount == 0) answer = true;
	else answer = false;

	return answer;
}
//
//int main()
//{
//	SameCount("Pyy");
//	return 0;
//}