/*실습예제 10-1 file:functionadd2.c

[알고리즘]
1. 두 값의 합을 구하는 함수
2. 두 값의 최소값을 구하는 함수
3. 두 값의 최대값을 구하는 함수

*/

#include <stdio.h>

int f_add2(int a, int b);	//함수선언: 두 값의 합을 구하는 함수

int f_findMin2(int x, int y);	//함수선언: 두 값의 최소값을 구하는 함수

int f_findMax2(int x, int y);	//함수선언: 두 값의 최대값을 구하는 함수 
// 형식매개변수 선언은 서로 달라도 됨. 실매개변수와 형식매개변수는 서로 달라도 됨


int main(void)
{
	int a = 3, b = 5;
	int add2_result = 0, findMin2_result = 0, findMax2_result = 0;

	add2_result = f_add2(a, b);	//함수 호출: 두 값의 합을 구하는 함수

	findMin2_result = f_findMin2(a, b);	//함수호출: 두 값의 최소값을 구하는 함수

	findMax2_result = f_findMax2(a, b);	//함수호출: 두 값의 최대값을 구하는 함수
	
	printf("%d+%d=%d입니다.\n\n", a, b, add2_result);	//3+5=8입니다.

	printf("%d와 %d의 최소값은 %d입니다.\n\n", a, b, findMin2_result);	//3과 5의 최소값은 3입니다.

	printf("%d와 %d의 최대값은 %d입니다.\n\n", a, b, findMax2_result);	//3과 5의 최대값은 5입니다.

	return 0;
}

//함수 add2의 함수정의 부분
int f_add2(int a, int b)
{
	int sum = a + b;

	return sum;	//괄호는 생략 가능
}

//함수 f_findMin2의 함수정의 부분
int f_findMin2(int x, int y)
{
	int min = x < y ? x : y;

	return min;
}

//함수 f_findMax2의 함수정의 부분
int f_findMax2(int x, int y)
{
	int max = x > y ? x : y;

	return max;
}
