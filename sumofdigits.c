#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r;
	}
	printf("sum of digits=%d",sum);
	getch();
}
