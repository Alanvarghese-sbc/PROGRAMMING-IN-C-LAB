#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter the number : ");
    fflush(stdout);
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("FACTORIAL OF THE NUMBER %d = %d",n,fact);

}
