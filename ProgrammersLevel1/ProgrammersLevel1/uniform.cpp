#include <iostream>
#include <vector>
#include <string>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = n;
	int arr[31];
	int reserveSize = reserve.size(), lostSize = lost.size();

	for (int i = 0; i < 31; i++)
	{
		arr[i] = 1;
	}
	//reserve�� �ִ� ��ȣ�� lost�� ���� ���� �����Ƿ� reserve���� ++���ְ� lost --
	for (int i = 0; i < reserveSize; i++)
	{
		arr[reserve[i]]++;

	}
	for (int j = 0; j < lostSize; j++)
	{
		arr[lost[j]] --;
	}
	

	int prev = 0, next = 0;

	for (int i = 0; i < reserveSize; i++)
	{
		if (arr[reserve[i]] < 2) continue; // �������� �ִ� �л��� ���� ������ ���� �����Ƿ� 2���� ������ ������ �� ����.

		if (reserve[i] != 0) //arr�� -1 �ε����� �����Ƿ� 0���϶��� ���ʹ�ȣ�� ������ �� ����
		{
			prev = reserve[i] - 1;
			if (arr[prev] == 0)
			{
				arr[prev]++;
				arr[reserve[i]]--;
				continue;
			}
		}
		if (reserve[i] < n)// ��ü �ο� ������ ���� �� �� ������ ��ȣ�� �����Ƿ� n���� �۾ƾ� �����ʹ�ȣ�� ������ �� ����
		{
			next = reserve[i] + 1;

			if (arr[next] == 0)
			{
				arr[next]++;
				arr[reserve[i]]--;
				continue;
			}
		}

	}

	for (int i = 1; i <= n; i++)
	{
		if (arr[i] == 0) answer--;
	}

	return answer;
}

int main()
{
	//solution(5, { 1,4 }, { 1,3,5 });

	/*cout << solution(5, { 2,4 }, { 1,3,5 }) << '\n';
	cout << solution(5, { 2,4 }, { 3 }) << '\n';
	cout << solution(3, { 3 }, { 1 }) << '\n';*/
	//solution(5, { 1,2,3 }, { 2,3,4 }) << '\n'; //4
	// solution(5, { 2,4 }, { 3 }) << '\n'; //4
	//cout << solution(3, {}, {}) << '\n';
	return 0;
}