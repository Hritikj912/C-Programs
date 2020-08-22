#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a=0,b=1,c;
	printf("Enter no. of terms\n");
	scanf("%d",&n);
	if(n==1)
	printf("0");
	else
	{
	 if(n==2)
	 printf("1");
	 else
	 {
	 	for(i=1;i<=n-2;i++)
	 	{
	 		c=a+b;
	 		a=b;
	 		b=c;
		 }
	 }
	printf("Required term=%d",c);
	getch();
}
}
