/*file:dowhilenumber.c
  do while �ݺ�����

  do
  {	�ݺ����� �ѹ��� ���� ��,
	������ ���� �� �����ϴ� �ݺ���;
   } (���ǹ�);

   �˰���:
	1���� 5���� 1�� �����Ǵ� ���� ����ϴ� ���α׷�
*/

#include <stdio.h>
#define MIN 1	//�ݺ� Ƚ���� ��ũ�� ����� ����
#define MAX 5	//�ݺ� Ƚ���� ��ũ�� ����� ����

int main(void)
{
	int n = MIN;
	printf("\n do~while�̿� %d���� %d���� ���� ��� \n", MIN, MAX);
	do
	{
		printf("%d\n", n++);
	} while (n <= MAX);

	printf("\n����� n=> %d\n", n);

	printf("\n while �̿� %d���� %d���� ���� ���\n", MIN, MAX);
	n = MIN;
	while (n <= MAX)	//�ݺ� ��ü�� �ݵ�� ������� �� ��
	{
		printf("%d\n", n++);
	};

	printf("\n����� n=>%d\n", n);

	return 0;
}