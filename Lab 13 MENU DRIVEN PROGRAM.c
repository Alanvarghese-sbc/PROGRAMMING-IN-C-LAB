#include<stdio.h>
int main()
{
	int ch,n,i,fact=1,count=0;
	while(ch!=4)
	{
		printf("\n !!!MENU!!!\n1.FACTORIAL\n2.ODD or EVEN\n3.PRIME or NOT\n4.EXIT");
		fflush(stdout);
		printf("\nEnter you choice : ");
		fflush(stdout);
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the number : ");
					fflush(stdout);
					scanf("%d",&n);
					for(i=n;i>0;i--)
					{
						fact=fact*i;
					}
					printf("FACTORIAL OF THE NUMBER %d = %d",n,fact);
			break;

			case 2: printf("Enter the number : ");
					fflush(stdout);
					scanf("%d",&n);
					if(n%2==0)
					{
					printf("%d is EVEN",n);
					}
				else
					{
					printf("%d is ODD",n);
					}
			break;


			case 3: printf("Enter the number : ");
					fflush(stdout);
					scanf("%d",&n);
					for(i=1;i<=n;i++)
					{
						if(n%i==0)
							count++;
					}
						if(count==2)
						{
							printf("%d is PRIME NUMBER : ",n);
						}
						else
						{
							printf("%d is NOT PRIME NUMBER : ",n);
						}
				break;

			case 4: printf("EXIT");
					break;
		}
	}
	return 0;
}
