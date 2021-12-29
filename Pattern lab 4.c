
#include <stdio.h>
int main(void)
{
		int i,j,c=1;
		for(i=5;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf(" %d ",c);
			}
			printf("\n");
			c++;
		}

		return 0;
	}
