#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0;
	printf("Sum of first hundred natural number=");
	for(i=1;i<=100;i++)
	{
		sum=sum+i;
	}
	printf("%d\n",sum);
	getch();
}
