#include<stdio.h>
int main()
{
	int n,a[100],i;
	printf("Enter the size of the Array(under 100) : ");
	fflush(stdout);
	scanf("%d",&n);
	printf("Enter the elements : ");
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The elements are : \n");
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
