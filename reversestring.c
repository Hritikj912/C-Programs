#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	char a[n+1];
	printf("ENTER LENGTH OF STRING\n");
	scanf("%d",&n);
	printf("ENTER STRING\n");
	for(i=0;i<n;i++)
	{
	scanf("%c",&a[i]);
	printf("%c",a[i]);
	}
	printf("REVERSE OF STRING IS\n");
	for(i=1;i<=n;i++)
	{
	printf("%c",a[n-i]);
	}
	getch();
}
