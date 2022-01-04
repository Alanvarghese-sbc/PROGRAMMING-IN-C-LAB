#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter the Array elements : ");
	fflush(stdout);
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The Array elements are : \n");
	fflush(stdout);
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
