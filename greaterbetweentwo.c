#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter any two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("%d is greater",a);
	else if(b>a)
	printf("%d is greater",b);
	else
	printf("both are equal");
	getch();
}
