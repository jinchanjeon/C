/*실습예제 10-1 file:functionadd2.c

[알고리즘]
1. 두 값의 합을 구하는 함수
2. 두 값의 최소값을 구하는 함수
3. 두 값의 최대값을 구하는 함수

*/

#include <stdio.h>

int f_add2(int a, int b);
int f_findMin2(int a, int b);
int f_findMax2(int a, int b);

int main(void)
{
	int a = 2, b = 5;
	int add2_result = 0, Min_result = 0, Max_result = 0;

	add2_result = f_add2(a, b);
	Min_result = f_findMin2(a,b);
	Max_result = f_findMax2(a, b);

	printf("%d와 %d의 합은 %d이다.\n\n", a,b,add2_result);
	printf("%d와 %d중 최소값은 %d이다.\n\n", a,b,Min_result);
	printf("%d와 %d중 최대값은 %d이다.\n\n", a, b, Max_result);

	return 0;
}

int f_add2(int a, int b)
{
	int sum = a + b;

	return sum;
}

int f_findMin2(int a, int b)
{
	int min = a < b ? a : b;

	return min;
}

int f_findMax2(int a, int b)
{
	int max = a > b ? a : b;

	return max;
}