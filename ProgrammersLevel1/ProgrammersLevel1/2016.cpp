#include <string>
#include <vector>

using namespace std;

/*
2016�� 1�� 1���� �ݿ����Դϴ�. 2016�� a�� b���� ���� �����ϱ��? �� �� a ,b�� �Է¹޾� 2016�� a�� b���� ���� �������� �����ϴ� �Լ�, s
olution�� �ϼ��ϼ���. ������ �̸��� �Ͽ��Ϻ��� ����ϱ��� ���� SUN,MON,TUE,WED,THU,FRI,SAT�Դϴ�. 

���� ��� a=5, b=24��� 5�� 24���� ȭ�����̹Ƿ� ���ڿ� TUE�� ��ȯ�ϼ���.

���� ����
2016���� �����Դϴ�.
2016�� a�� b���� ������ �ִ� ���Դϴ�. (13�� 26���̳� 2�� 45�ϰ��� ��¥�� �־����� �ʽ��ϴ�)*/


string solution(int a, int b) {
	string days[7] = { "THU","FRI","SAT","SUN","MON","TUE","WED" };

	int maxDay[12] = { 0,31,29,31,30,31,30,31,31,30,31,30 };

	int total = 0;

	for (int i = 1; i < a; i++)
	{
		total += maxDay[i];
	}
	total += b;

	int result = total % 7; // 1�� result��

	return days[result];
}