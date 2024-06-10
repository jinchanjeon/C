// basictype.c: 두 정수의 합, 두 실수의 차 출력

#include <stdio.h>

int main(void)
{
	int a = 30, b = 43;  //두 정수 선언과 추기값 대입
	int sum = 0;			 //두 정수의 합을 저장할 변수 선언
	sum = a + b;         //두 정수의 합 구하기

	double x = 38.342, y = 45.345;	//두 실수 선언과 초기값 대입
	double difference = 0;	        //두 실수의 차을 저자알 변수 선언
	difference = x - y;             //두 실수의 차 구하기

	printf("합: %d\n", sum);    	//두 정수의 합 출력
	printf("차: %f\n", difference);	//두 실수의 차 출력

	return 0;

}