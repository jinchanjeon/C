/*file:forsum.c

�˰���:
1�������� ǥ���Է����� ���� ���� ���������� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#define MIN 1

int main(void)
{
	int i = 0, sum = 0, max = 0;
	
	printf("%d�������� ���������� ���� ���� ���� ���� �ϳ� �Է�:", MIN);
	scanf("%d", &max);

	i = 0, sum = 0;
	for (i = MIN; i <= max; i++)
	{
		sum += i;
	}
	printf("\nfor������ ���� %d���� %d���� ��: %3d\n", MIN, max, sum);

	printf("1�������� ���������� ���� ���� ���� ���� �ϳ� �Է�:");
	scanf("%d", &max);

		i = 0, sum = 0;
		for (i = MIN; i <= max; i++)
		{
			sum += i;

		}
		printf("\nfor������ ���� 1���� %d���� ��: %d\n", max, sum);


		return 0;

}	//printf("1���� %d������ ���� ���� ���� ���� �ϳ� �Է�:", max);�� �ȵǴ� ����: max�� 0���� �ż� ����� '1���� 0������ ~~'�� ����. �׷��� �ؿ� scanf("%d", &max);  �������
