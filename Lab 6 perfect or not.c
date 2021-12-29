
#include <stdio.h>
int main(void)
{
		int n,i,sum=0;
		  printf("ENTER THE NUMBER : ");
		    scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			  if(n%i==0)
			  {
				sum=sum+i;
			  }
		}
			if(sum==n)
			 {
				printf("%d is perfect number",n);
		 	 }
				else
				{
					printf("%d is not perfect number ",n);
				}

	return 0;
}
