#include<stdio.h>
void main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12,},i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
}
