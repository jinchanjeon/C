/*file:file:forbasic.c

for �ݺ�����
for(�ʱ�ȭ;�ݺ����� �˻�; ������� ����)
{
	�ݺ������� ���� ��� �����ϴ� �ݺ���;
}

�˰���:
printf("c��� ����ֳ׿�! \n");
printf("c��� ����ֳ׿�! \n");
printf("c��� ����ֳ׿�! \n");
printf("c��� ����ֳ׿�! \n");
printf("c��� ����ֳ׿�! \n");
�ݺ����� �̿��Ͽ� 5�� ����ϴ� ���α׷�
*/

#include <stdio.h>
#define MIN 4	//�ݺ� Ƚ���� MIN ��ũ�� ����� ����
#define MAX 10	//�ݺ� Ƚ���� MAX ��ũ�� ����� ����

int main(void)
{
	int i = 0;

	for (i = MIN; i <= MAX; i++)	//for(i=4;i<=10;i++)
	{
		printf("c��� ����ֳ׿�! %d\n", i);
	}
	printf("\n����� i=> %d\n", i);

	return 0;
}