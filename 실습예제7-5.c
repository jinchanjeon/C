/*file:whilenumber.c
  while �ݺ�����
  
  while (���ǹ�)
  {
	������ ���� �� �����ϴ� �ݺ���:
   };

   �˰���:
	int n=1;
	//�������� 1�� ������Ű�鼭 ��� �ݺ�
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
   �ݺ����� �̿��Ͽ� 5�� ����ϴ� ���α׷�, �ݺ��� Ƚ�� MAX ��ũ�� ����� ����
  */

#include <stdio.h>

#define MIN 8  //�ݺ� Ƚ���� ��ũ�� ����� ����
#define MAX 19 //�ݺ� Ƚ���� ��ũ�� ����� ����

int main(void)
{
	int n = MIN;

	while (n <= MAX) //�ݺ� ��ü�� �ݵ�� ������� �Ұ� 
	{
		printf("%d\n", n++);
	}

	printf("\n����� n => %d\n", n);

	return 0;
}