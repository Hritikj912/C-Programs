#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,t,SI;
	printf("Enter principle,rate of interest and time");
	scanf("%d%d%d",&p,&r,&t);
	SI=p*r*t/100;
	printf("Simple interest=%d",SI);
	scanf("%d",&SI);
	getch();
	
}
