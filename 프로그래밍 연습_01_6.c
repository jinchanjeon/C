/*file:

알고리즘:
        0
	   101
	  21012
	 3210123
    432101234
   54321012345
  6543210123456
 765432101234567
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 7


int main(void)
{
	
	int i = 0, j = 0;

	for (i = 0; i <= MAX; i++)
	{
		for (j = MAX; j >= -MAX; j--)
		{
			if (abs(j) > i)
			{
				putchar(' '); 
			}	
			else 
			{
				printf("%d", abs(j));
			}
		}
		putchar('\n');
	}

	return 0;
}