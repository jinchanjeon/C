/*file:break.c

for	�ݺ��� �ߴ� break

for( ; ;)
{
	break;
}

while �ݺ� �ߴ� break

while(1)
{
	break;
};

do �ݺ� �ߴ� break

do
{
	break;
} while (1);

�˰���:
���� �ݺ������� ������ �Է� �޾� ����ϴµ�, 0�� �ԷµǸ� break���� �̿��Ͽ� while �ݺ����� ���� ���� ���α׷��� ����
*/

#define _CRT_SECURE_NO_WARNINGS	//scanf() ������ �����ϱ� ���� ��� ����
#include <stdio.h>

int main(void)
{
	int input = 0;

	while (1)	//���ѹݺ���
	{
		printf("����[����, 0(����), ���]�� �Է� �� [Enter]:");
		scanf("%d", &input);

		printf("�Է��� ���� %d\n", input);
		if (input == 0)
		{
			break;
		}
	}
	puts("�����մϴ�.");

	return 0;
}