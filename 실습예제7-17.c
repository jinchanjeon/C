/*file:nestedloop.c
	��ø�� �ݺ���: �ݺ��� ���� �ݺ����� �� �ִ� ����
	�˰���:
		�ܺιݺ����� 1���� 5����, ���ιݺ����� 1���� 7���� �ݺ��ϸ鼭 ������ �������� ����ϴ� ���α׷�
*/

#include <stdio.h>

int main(void)
{
	int m = 0, n = 0;

	for (m = 1; m <= 5; m++)
	{
		printf("m=%-2d\n", m);

		for (n = 1; n <= 7; n++)
		{
			printf("n=%-3d", n);
		}
		printf("\n\n");
	}

	return 0;
}