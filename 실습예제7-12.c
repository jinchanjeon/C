/*file:inputsum.c

for �ݺ������ while �ݺ����� ��
for(�ʱ�ȭ;�ݺ����� �˻�; ������� ����)
{
  �ݺ������� ���� ��� �����ϴ� �ݺ���'
}

while �ݺ�����
while(���ǹ�)
{
	������ ���� �� �����ϴ� �ݺ���;
}

do �ݺ�����
do
{
	������ ���� �� �����ϴ� �ݺ���;
}while(���ǹ�);

�˰���:
1���� �Է� ���� ���� �������� ���� for���� while���� do~while������ ���� ���ϴ� ���α׷�
*/

#define _CRT_SECURE_NO_WARNINGS	//scanf()������ �����ϱ� ���� ��� ����

#include <stdio.h>

#define MIN 1	//�ݺ� �ʱⰪ�� MIN��ũ�� ����� ����

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

	i = MIN, sum = 0;
	while (i <= max)
	{
		sum += i;
		i++;	
	}
	printf("while������ ���� %d���� %d���� ��: %3d\n", MIN, max, sum);

	i = MIN, sum = 0;
	do
	{
		sum += i;
		i++;
	} while (i <= max);
	printf("do~while������ ���� %d���� %d���� ��:%3d\n", MIN, max, sum);

	return 0;
}