/*�ǽ�����10-7 file:srand.c

[�˰���]
	1. �õ� ���� �� ���� ���
	2. srand()�� �õ尪�� ���� ������ �� 1���� 100������ ������ ����
*/

#include <stdio.h>
#include <stdlib.h> //rand().srand()�� ���� ������� ����

#include <time.h> //time()�� ���� ������� ����

#define MAX 100

int main(void)
{
	long seconds = 0;
	seconds = (long)time(NULL); //�Ź� �ٸ� �������� ���ؼ� ������ �ð��� �õ尪���� ��
	srand(seconds); //printf("%ld\n",seconds);

	printf("1~%5d������ ���� 5��:\n", MAX);
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", rand() % MAX + 1);
	}
	puts("");

	getchar();

	return 0;
}