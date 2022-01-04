#include<stdio.h>
int main()
{
	int m,n,i,j,a[50][50],p;
	printf("Enter the number of rows : ");
	fflush(stdout);
	scanf("%d",&m);
	printf("\nEnter the number of columns : ");
	fflush(stdout);
	scanf("%d",&n);
	p=m*n;
	printf("\nEnter %d elements : ",p);
	fflush(stdout);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("MATRIX\n");
	fflush(stdout);
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	return 0;
}
