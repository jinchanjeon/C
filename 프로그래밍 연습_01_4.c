/*�˰���:
1���� 100������ ���� �߿��� 2, 3, 5, 7�� ����� ������ ���� �� �࿡ 10���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#include <stdio.h>
#define MIN 1
#define MAX 100

int main(void)
{
	
	int i = 0, j = 0;
	printf("1���� 100������ ���� �߿��� 2,3,5,7�� ����� ������ ��\n");
	for (i = MIN; i <= MAX; i++)
	{
		if ((i % 2 == 0)|| (i % 3 == 0)||(i % 5 == 0) ||(i % 7 == 0))
		{
			continue;
		}
		else
		{
			for (j = 0; j <= 10; j++)
			{
				printf("%d", i);
			}
		}
		
		
		printf("\n");
	}

	return 0;
}