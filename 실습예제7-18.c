/*file:triangle.c

���ιݺ��� �ܺιݺ��� ����

�˰���:
*
**
***
****
*****
���� �ﰢ�� ������� ����ϴ� ���α׷�

*****
****
***
**
*

*/

#include <stdio.h>

#define MIN 1	//�ݺ� �ʱⰪ�� MIN ��ũ�� ����� ����
#define MAX 5	//�ݺ� Ƚ���� MAX ��ũ�� ����� ����

int main(void)
{
	int i = 0, j = 0;

	for (i = MIN; i <= MAX; i++)
	{
		for (j = MIN; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = MIN; i <= MAX; i++)
	{
		for (j = MAX; i <= j; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}