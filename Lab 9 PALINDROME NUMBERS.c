#include<stdio.h>
int main()
{
	int n,r,sum,temp;
	printf("Enter the number : ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
	    sum=sum*10+r;
	    n=n/10;

	}
		if(temp==sum)
		{
			printf("%d is a PALINDROME NUMBER ",temp);
		}
		else
		{
		printf("%d is not a PALINDROME NUMBER",temp);
		}
	return 0;
}
