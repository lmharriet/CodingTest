#include <iostream>

using namespace std;

/*
숫자의 개수
세 개의 자연수 A, B, C가 주어질 때 A×B×C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

예를 들어 A = 150, B = 266, C = 427 이라면

A × B × C = 150 × 266 × 427 = 17037300 이 되고,

계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
*/
int countNumber()
{
	int A, B, C;
	cin >> A >> B >> C;
	int result = A * B * C;
	int arr[10] = { 0 };
	int index = 0;

	while (result != 0)
	{
		index = result % 10; //index에 0~9까지의 수가 들어간다.
		arr[index] += 1; //만약 index가 7이면 arr[7]에 들어있는 값에 1을 더해준다.
		result /= 10; //앞서 모듈러 연산했을 때 제일 마지막 자리수는 사용했기 때문에 나누기 해서 마지막 자리수를 제외한 값을 저장한다.
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i]<<'\n'; //0번~9번까지 저장된 값 출력
	}
	return 0;
}