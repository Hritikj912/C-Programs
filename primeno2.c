#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,flag=0;
	printf("Enter any number\n");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==0)
	printf("Prime number");
	else
	printf("non prime number");
	getch();
}
