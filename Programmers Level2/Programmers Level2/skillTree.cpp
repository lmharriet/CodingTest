#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int CheckSkillTree(string order, stack<char> s)
{
	stack<char> st = s;
	for (int i = 0; i < order.length(); i++)
	{
		if (st.empty() || st.top() != order[i])
		{
			break;
		}
		if (st.top() == order[i])
		{
			st.pop();
		}
	}

	if (st.empty())
	{
		return 1;
	}
	return 0;
}

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	stack<char> st;
	for (int i = 0; i < skill_trees.size(); i++)
	{
		for (int j = skill_trees[i].length() - 1; j >= 0; j--)
		{
			for (int k = skill.length() - 1; k >= 0; k--)
			{
				if (skill_trees[i][j] == skill[k])
				{
					st.push(skill_trees[i][j]);
					break;
				}
			}
		}

		answer += CheckSkillTree(skill, st);
		st = {};
	}
	return answer;
}

int main()
{
	cout<< solution("CBD", { "BACDE", "CBADF", "AECB", "BDA" });

	return 0;
}