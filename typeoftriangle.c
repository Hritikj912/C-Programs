#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,flag=0;
	printf("ENTER 3 SIDES OF TRIANGLE\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b<=c)||(b+c<=a)||(a+c<=b))
	{printf("TRIANGLE IS NOT POSSIBLE\n");
	flag=1;}
	if(a==b&&b==c)
	printf("EQULATERAL TRIANGLE\n");
    if((a==b)||(b==c)||(c==a))
	printf("ISOSCELES TRIANGLE\n");
    if((a!=b&&b!=c)&&flag==0)
	printf("SCALENE TRIANGLE\n");
	if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
	printf("RIGHT ANGLED TRIANGLE\n");
	getch();
}
