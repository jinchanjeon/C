/* file:triangle.c

���ιݺ��� �ܺιݺ��� ����

�˰���:
54321
5432
543
54
5
����ϴ� ���α׷�
*/

#include <stdio.h>
#define MIN 1 
#define MAX 5

int main(void)
{
	int i = 0, j = 0;

	for (i = MIN; i <= MAX; i++)
	{
		for (j = MAX; i <= j; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	return 0;
}