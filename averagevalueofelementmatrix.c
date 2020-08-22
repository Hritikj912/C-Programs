#include<stdio.h>
void main()
{
	int a[10][10],r,c,n,i,j;
	float g,sum=0,k;
	printf("Enter no.of Rows & columns of Matrix:\n");
	scanf("%d%d",&r,&c);
	printf("Enter elements in matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<r;i++)
	{
		 for(j=0;j<c;j++)
		{
		sum=sum+a[i][j];
  	}
	}
	k=r*c;
	g=sum/k;	
	printf("Average of all values is %f",g);
	}

