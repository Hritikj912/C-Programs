#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,flag,i,max,min=a[5];
	printf("ENTER NUMBER OF ELEMENTS IN LIST\n");
	scanf("%d",&n);
	printf("ENTER ELEMENTS IN LIST\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=n-1;i>=0;i--)
	{
		if(max<a[i])
		{
		max=a[i];
	    } 
	 }
	  printf("MAXIMUM ELEMENT IS %d\n",max);
	  	for(i=n-1;i>=0;i--)
	{
		if(min>a[i])
		{
		min=a[i];
	    } 
	 }
	  printf("\nMINIMUM ELEMENT IS %d",min);
	getch();
}
