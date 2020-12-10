#include <iostream>
#include <set>

using namespace std;
/*
������
�� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�. ���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�.

�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. �� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

*/
int main()
{
	int arr[10];
	int num = 42;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr[i] %= num;
	}

	set<int> count;
	for (int i = 0; i < 10; i++)
	{
		count.insert(arr[i]);
	}

	cout << count.size();
	

	return 0;
}