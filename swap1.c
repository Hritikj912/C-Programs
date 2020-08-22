#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter any two numbers\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("values of variables after swapping\n");
	printf("%d and %d",a,b);
	getch();
}
