/*file:triangle.c

내부반복이 외부반복에 의존

알고리즘:
      1
     21
    321
   4321
  54321
 출력하기
 */

#include <stdio.h>
#define MIN 1
#define MAX 5

int main(void)
{
    int i = 0, j = 0, k=0;
    
    for (i = MIN; i <= MAX; i++)
    {
        for (j = MIN; j <= 5-i; j++)
        {
            printf(" ");
        }
        for (k = i; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}