#include<stdio.h>
int main()
{
	int n,temp,r,c,sum=0;
	printf("Enter the number : ");
	fflush(stdout);
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\n%d is a ARMSTRONG NUMBER ",temp);
	}
	else
	{
		printf("\n%d is not a ARMSTRONG NUMBER",temp);
	}
	return 0;
}
