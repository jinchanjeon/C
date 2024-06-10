/*file:address.c

[주소연산자:&]
& 변수명 --> 변수의 시작주소값 참조

[알고리즘]
	1. 변수선언하고, scanf() 함수 사용하여 
	2. 입력받은 값 출력
	3. 변수의 주소값을 10진수(%u),16진수(%p)로 출력
	4. 주소값의 크기 출력
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input = 0;

	printf("정수입력:");
	scanf("%d", &input);

	printf("입력값: %d\n", input);

	printf("주소값: %u(10진수), %p(16진수)\n", (int)&input, &input);
	printf("주소값:%d(10진수),%#x(16진수)\n", (unsigned)&input, (int)&input);

	printf("주소 값 크기:%d\n", sizeof(&input));

	return 0;
}