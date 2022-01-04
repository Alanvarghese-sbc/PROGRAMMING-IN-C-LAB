#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the size of the array : ");
	fflush(stdout);
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements : ");
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("THE SUM OF ELEMENTS = %d",sum);
	return 0;
}
