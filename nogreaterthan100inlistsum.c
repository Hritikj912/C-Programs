#include<stdio.h>
void main()
{
	int a[50],n,i;
	float sum,k=0;
	printf("ENTER NUMBER OF ELEMENTS IN LIST:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ELEMENT GREATER THAN 100 :\n");
	for(i=0;i<n;i++)
	{
	if(a[i]>100)
	{
		printf("%d\n",a[i]);
		sum=sum+a[i];
		k++;
	}
	}
	printf("SUM OF ELEMENTS GREATER THAN 100: %f\n\n",sum);
printf("AVERAGE OF ELEMENTS GREATER THAN 100: %f",sum/k);}

