#include <iostream>
#include <string>

using namespace std;
/*
����� ���� �ٸ� ����� �ٸ��� �Ųٷ� �д´�. ���� ���, 734�� 893�� ĥ�ǿ� �����ٸ�, ����� �� ���� 437�� 398�� �д´�.
����, ����� �� ���� ū ���� 437�� ū ����� ���� ���̴�.

�� ���� �־����� ��, ����� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int ConstNumber()
{
	int A, B;
	cin >> A >> B;

	string numA, numB;

	for (int i = 0; i < 3; i++)
	{

		numA += to_string(A % 10);
		A /= 10;
		numB += to_string(B % 10);
		B /= 10;
	}

	A = stoi(numA);
	B = stoi(numB);

	if (A > B)
		cout << A;
	else
		cout << B;
	return 0;

}