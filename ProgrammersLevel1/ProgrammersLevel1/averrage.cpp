#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/*
C언어로 푼 문제
평균 구하기
문제 설명
정수를 담고 있는 배열 arr의 평균값을 return하는 함수, solution을 완성해보세요.

제한사항
arr은 길이 1 이상, 100 이하인 배열입니다.
arr의 원소는 -10,000 이상 10,000 이하인 정수입니다.

*/
// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    for (int i = 0; i < arr_len; i++)
    {
        answer += arr[i];
    }
    answer /= arr_len;
    return answer;
}