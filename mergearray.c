#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,m,i,j,p,b[100],c[100];
	printf("ENTER NUMBER OF ELEMENTS IN ARRAY 1\n");
	scanf("%d",&n);
	printf("ENTER %d ELEMENTS IN ARRAY 1\n",n);
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
    }
    printf("ENTER NUMBER OF ELEMENTS IN ARRAY 2\n");
	scanf("%d",&m);
	printf("ENTER %d ELEMENTS IN ARRAY 2\n",m);
	for(i=n;i<m+n;i++)
	scanf("%d",&b[i]);
	printf("ARRAY AFTR MERGING BOTH ARRAYS\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=n;i<m+n;i++)
	{
		c[i]=b[i];
	}
	for(i=0;i<m+n;i++)
    {
    	printf("%d\n",c[i]);
	}

getch();
}
