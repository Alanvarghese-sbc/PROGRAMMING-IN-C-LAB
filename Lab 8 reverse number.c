#include <stdio.h>
int main(void)
{
	int n,r,sum=0,temp;
	printf("Enter the numbers : ");
	fflush(stdout);
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("Reverse order of %d is = %d",temp,sum);
}
