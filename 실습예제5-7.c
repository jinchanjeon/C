//file: shorteval.c

#include <stdio.h>

int main(void)
{
	int a = 10, b = 5, m = 1;
	int result;

	result = (a < b) && (m++ == 1);	//&&의 왼쪽이 0이므로 오른쪽 연산을 하지 않고 0으로 판별, m은 변하지 않음
	printf("m=%d result=%d\n", m, result);

	result = (a > b) || (--m == 0);	//||의 왼쪽이 1이므로 오른쪽 연산을 하지 않고 1으로 판별, m은 변하지 않음
	printf("m=%d result=%d\n", m, result);

	return 0;
}