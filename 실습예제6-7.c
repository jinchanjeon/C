/*file:switch.c
switch문: 연산값이 문자 또는 정수일 때 사용

switch(연산자)
{
	case상수1:
			연산식값이 상수 1이면 실행할 명령들...
			break:
	case상수2:
			연산식값이 상수2이면 실행할 명령들...
			break:
	case상수3:
			연산식값이 상수3이면 실행할 명령들...
			break:
			:
			:
	default:
			연산식값에 위의 상수값들과 일치하는 것이 없다면 실행할 명령들...
			break:
}

	알고리즘:
	-두 개의 실수값, 연산종류를 입력 받아서,
	덧셈, 뺄셈, 곱셈, 나눗셈, 나머지 연산을 수행
*/

#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	double x = 0.0, y = 0.0;
	int op = 0;
	printf("두 실수 입력:");
	scanf("%lf %lf", &x, &y);

	printf("연산종류 번호선택 1(+), 2(-),3(*),4(/),5(%%):");
	scanf("%d", &op);

	/*if~else if문*/
	printf("\n\n*****lf~else if문\n");

	if (op == 1)
	{
		printf("%.2lf+%.2lf=%.2lf\n", x, y, x + y);
	}
	else if (op == 2)
	{
		printf("%.2lf-%.2lf=%.2lf\n", x, y, x - y);
	}
	else if (op == 3)
	{
		printf("%.2lf*%.2lf=%.2lf\n", x, y, x * y);
	}
	else if (op == 4)
	{
		printf("%.2lf/%.2lf=%.2lf\n", x, y, x / y);
	}
	else if (op == 5)
	{
		printf("%4d%%%4d=%4d\n", (int)x, (int)y, (int)x % (int)y);
	}
	else
	{
		printf("번호를 잘못 선택했습니다.\n");
	}

	/*switch문*/
	printf("\n\n*****switch \n");

	switch (op)
	{
	 case 1:
		printf("%.2lf+%.2lf=%.2lf\n", x, y, x + y);
		break;
	 case 2:
		printf("%.2lf-%.2lf=%.2lf\n", x, y, x - y);
		break;
	 case 3:
		printf("%.2lf*%.2lf=%.2lf\n", x, y, x * y);
		break;
	 case 4:
		printf("%.2lf/%.2lf=%.2lf\n", x, y, x / y);
		break;
	 case 5:
		printf("%4d %% %4d=%4d\n", (int)x, (int)y, (int)x % (int)y);
		break;
	 default:
		printf("번호를 잘못 선택했습니다.\n");
		break; //생략가능
	}

	return 0;
}