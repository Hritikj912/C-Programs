#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter any three no. please\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("%d is greatest",a);
	}
	if(a<b)
	{
		if(b>c)
		printf("%d is greatest",b);
	}
	if(c>a)
	{
		if(c>b)
		printf("%d is greatest",c);
	}
}
