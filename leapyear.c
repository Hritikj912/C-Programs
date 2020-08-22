#include<stdio.h>
#include<conio.h>
int main()
{
	int y;
	printf("Enter any year:\n");
	scanf("%d",y);
	if(y%400==0||(y%4==0&&y%100!=0))
	printf("%d ia a leap year",y);
	else
	printf("%d is not a leap year",y);
	getch();
}
