#include<stdio.h>
#include<conio.h>
int table(int);
void main()
{int n,ans;
printf("ENTER NO.\n");
scanf("%d",&n);
ans=table(n);
printf("%d\n");
getch();
}
int table(int n)
{
	int i,c;
	for(i=1;i<=10;i++)
	c=i*table(n);
	return c;
}

