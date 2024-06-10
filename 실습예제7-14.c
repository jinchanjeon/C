/*file:continue.c

반복의 계속 continue: 반복의 시작으로 이동하여 다음 반복을 실행하는 문장이다.
--> while문은 앞쪽 조건문으로 이동하여 실행
--> do while문은 뒷쪽 조건문으로 이동하여 실행
--> for문은 증감쪽으로 이동하여 실행

알고르짐:
continue문을 이용하여 1에서 15까지 정수 중에서 3으로 나누어 떨어지지 않는 수를 출력하는 프로그램

*/

#define MIN 1	//반복 초기값을 MIN 매크로 상수로 정의
#define MAX 15	//반복 횟수를 MAXㄴ 매크로 상수로 정ㅇ의
#define DIV 3	//배수를 DIV 매크로 상수로 정의

#include <stdio.h>

int main(void)
{
	int i = 0;

	printf("%d에서 %d까지 정수 중에서 %d으로 나누어 떨어지지 않는 수\n", MIN, MAX, DIV);

	for (i = MIN; i <= MAX; i++)
	{
		if (i % DIV == 0)	//3으로 나누어 떨어질 경우, 3의 배수
		{
			continue;
		}
		printf("%3d", i);
	}
	puts("");
	return 0;
}