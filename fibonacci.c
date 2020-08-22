#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=-1,b=1,c;
	printf("FIBONACCI SERIES\n");
	printf("Enter number of terms\n");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			c=a+b;
		printf("%d\t",c);
			a=b;
			b=c;
		}
		getch();
}
