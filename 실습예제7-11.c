/* file:forsum.c
for �ݺ�����

for(�ʱ�ȭ; �ݺ����� �˻�; ������� ����)
{
	�ݺ������� ���� ��� �����ϴ� �ݺ���'
}
�˰���:
for���� �̿��Ͽ� 1���� 10���� ���� ���ϴ� ���α׷�
*/

#include <stdio.h>

#define MIN 1	//�ݺ� �ʱⰪ�� MIN ��ũ�� ����� ����
#define MAX 10	//�ݺ� Ƚ���� MAX ��ũ�� ����� ����

int main(void)
{
	int i = 0, sum = 0;
	
	printf("\n**���� ǥ������ for��**\n");
	i = 0, sum = 0;
	for (i = MIN; i <= MAX; i++)
	{
		sum += i;	//sum=sum+i; 0+1+2+3+4.....+10
	}
	printf("%d���� %d���� ��: %3d\n", MIN, MAX, sum);

	printf("\n\n**���� ����: �߰�ȣ ���� for��**\n");
	for (i = 1, sum = 0; i <= 10; i++)	//++i�� ����
		sum += i;	//sum=sum+i;
	printf("1���� 10���� ��: %3d\n", sum);

	printf("\n\n**���� ����: ���� ���� for��**\n");
	for (i = 1, sum = 0; i <= 10;)
	sum += i++;
	printf("1���� 10���� ��:%3d\n", sum);

	printf("\n\n**���� ����: ���� ���� �̿� for��**\n");
	for (i = 0, sum = 0; i <= 9;)
		sum += ++i;
	printf("1���� 10���� ��:%3d\n", sum);

	printf("\n\n**���� ����:�� �������� �ۼ��� for ��**\n");
	for (i = 1, sum = 0; i <= 10; sum += i++);	//�ݺ���ü�� ���� for��
	printf("1���� 10���� ��: %3d\n", sum);

	return 0;

}