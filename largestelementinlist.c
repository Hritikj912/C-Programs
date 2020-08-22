
#include<stdio.h>
void main()
{
	int n,i,a[50],k,max;
	printf("Enter number of elements in list:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
	if(max<a[i])
	{
  max=a[i];
	k=i+1;
	}
	}
	printf("Largest Element is %d at position %d",max,k);
}

