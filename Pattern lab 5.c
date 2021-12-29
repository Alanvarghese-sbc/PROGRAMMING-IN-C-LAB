
#include <stdio.h>
int main(void)
{
	int i,j,c=1,a=1;

	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",a);
		    a++;
		}
		printf("\n");
		c=c+1;
		a=c;
	}


	return 0;
}
