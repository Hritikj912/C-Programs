#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter any three no. please\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("%d is greatest",a);
		if(c>a)
		printf("%d is greatest",c);
	}
    else
	printf("%d is greatest",b);
	getch();
}
