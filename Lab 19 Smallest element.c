#include<stdio.h>
int main()
{
	int n,i,s;
	printf("Enter the size of the Array : ");
	fflush(stdout);
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements : ");
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	s=a[0];
	for(i=0;i<n;i++)
	{
		if(s>a[i])
		{
			s=a[i];
		}

	}
	printf("The smallest element is : %d",s);
	return 0;
}
