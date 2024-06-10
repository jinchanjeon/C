/*file:break.c

for	반복의 중단 break

for( ; ;)
{
	break;
}

while 반복 중단 break

while(1)
{
	break;
};

do 반복 중단 break

do
{
	break;
} while (1);

알고리즘:
무한 반복문으로 정수를 입력 받아 출력하는데, 0이 입력되면 break문을 이용하여 while 반복문을 빠져 나와 프로그램이 종료
*/

#define _CRT_SECURE_NO_WARNINGS	//scanf() 오류를 방지하기 위한 상수 정의
#include <stdio.h>

int main(void)
{
	int input = 0;

	while (1)	//무한반복문
	{
		printf("정수[음수, 0(종료), 양수]를 입력 후 [Enter]:");
		scanf("%d", &input);

		printf("입력한 정수 %d\n", input);
		if (input == 0)
		{
			break;
		}
	}
	puts("종료합니다.");

	return 0;
}