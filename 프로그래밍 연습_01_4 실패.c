/*file:continue.c

�˰���:
1���� 100������ ���� �߿��� 2,3,5,7�� ����� ������ ���� �� �࿡ 10���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#define MIN 1
#define MAX 100
#define max 10

#include <stdio.h>

int main(void)
{
	int i = 0,j=0;

	printf("%d���� %d���� ������ 2���� ������ �������� �ʴ� ��\n", MIN, MAX);
	
	for (i = MIN; i <= MAX; i++)
	{
		if ((i % 2 == 0)||(i%3==0)||(i%5==0)||(i%7==0))
		{
			continue;

			for (j = MIN; j <= max; j++)
			{
				printf("%d", j);
			}
		}
		
		
		printf("%3d", i);
	}
	
	return 0;
}