#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter any three no. please\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
    printf("%d is greatest",a);
    if(b>c&&b>a)
    printf("%d is greatest",b);
    if(c>a&&c>b)
    printf("%d is greatest",c);
    getch();
}
