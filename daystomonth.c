#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n;
	printf("ENTER NUMBER OF DAYS\n");
	scanf("%d",&n);
	a=n/30;
	b=n-30*a;
	//we assume that there are 30 days in a month
	printf("THERE ARE %d MONTHS AND %d DAYS",a,b);
	getch();
}
