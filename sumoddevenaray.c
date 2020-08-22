#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,j,se,so,k,temp,flag=0,n;
	printf("ENTER NUMBER OF ELEMENTS IN ARRAY\n");
	scanf("%d",&n);
	printf("ENTER VALUES IN ARRAY:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("VALUES IN ARRAY:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			se=se+a[i];
		}
	}
	printf("SUM OF EVEN NUMBERS IS %d\n",se-1);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			so=so+a[i];
		}
	}
	printf("SUM OF ODD NUMBERS IS %d",so);
}
