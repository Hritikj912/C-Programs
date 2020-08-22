#include<stdio.h>
#include<conio.h>
int power(int,int);
void main()
{
	int n,p,ans,a,b;
	printf("ENTER ANY NUMBER\n");
	scanf("%d",&n);
	printf("ENTER POWER TO THE NUMBER %d\n",n);
	scanf("%d",&p);
    ans=power(n,p);
	printf("THE %d POWER OF %d=%d",p,n,ans);
	getch();
	
}
int power(int a,int b)
{
	if(b==0)
	return 1;
	else if(b==1)
	return a;
	else
	return a*power(a,b-1);
}
