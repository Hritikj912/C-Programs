#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,sum=0;
	printf("ENTER NUMBER OF ELEMENTS\n");
	scanf("%d",&n);
	printf("ENTER ELEMENTS\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	   sum=sum+a[i];
    }
	printf("\nSUM OF ELEMENTS=%d",sum);
	getch();
}
