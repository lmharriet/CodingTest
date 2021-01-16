#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
�ڿ��� n�� �Ű������� �־����ϴ�.
n�� 3���� �󿡼� �յڷ� ������ ��, �̸� �ٽ� 10�������� ǥ���� ���� return �ϵ���
solution �Լ��� �ϼ����ּ���.

��

45 -> 1200(3����)->0021 (������) -> 10����

45�� 3���� ������. �������� �ڿ������� �����ش�
*/

int base3Converter(int n)
{
	int answer = 0;
	int number = n;
	int remain = 0;

	vector<int> vBase;

	while (number)
	{
		remain = number % 3;
		vBase.push_back(remain);
		number /= 3;

	}

	int size = vBase.size() - 1;

	for (int i = 0; i < vBase.size(); i++)
	{
		answer += vBase[i] * pow(3, size);
		size--;
	}
	return answer;
}
