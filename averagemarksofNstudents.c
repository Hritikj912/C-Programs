#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,average,sum=0;
	printf("ENTER NUMBER OF STUDENTS\n");
	scanf("%d",&n);
	printf("ENTER MARKS OF STUDENTS\n");
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	sum=sum+a[i];
	}
	printf("AVERAGE MARKS OF STUDENTS=%d",sum/n);
	getch();
}
