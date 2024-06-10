/*실습예제10-7 file:srand.c

[알고리즘]
	1. 시드 지정 후 난수 출력
	2. srand()로 시드값을 먼저 지정한 후 1에서 100사이의 난수를 생성
*/

#include <stdio.h>
#include <stdlib.h> //rand().srand()를 위한 헤더파일 포함

#include <time.h> //time()을 위한 헤더파일 포함

#define MAX 100

int main(void)
{
	long seconds = 0;
	seconds = (long)time(NULL); //매번 다른 난수값을 위해서 현재의 시간을 시드값으로 줌
	srand(seconds); //printf("%ld\n",seconds);

	printf("1~%5d사이의 난수 5개:\n", MAX);
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", rand() % MAX + 1);
	}
	puts("");

	getchar();

	return 0;
}