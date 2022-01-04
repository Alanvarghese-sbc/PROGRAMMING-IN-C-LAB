#include<stdio.h>
int main()
{
	int n,a[100],i,l;
	printf("Enter the size of the Array(under 100) : ");
	fflush(stdout);
	scanf("%d",&n);
	printf("Enter the elements : ");
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=0;i<n;i++)
	{
		if(l<a[i])
		{
			l=a[i];
		}

	}
	printf("The largest element is : %d",l);
	return 0;
}
