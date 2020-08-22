#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],n,r,c,sum=0;
	printf("ENTER DEGREE OF MATRICES\n");
	scanf("%d",&n);
	printf("ENTER ELEMENTS OF MATRIX\n");
	for(r=0;r<n;r++)
	{
	     for(c=0;c<n;c++)
	    scanf("%d",&a[r][c]);
	}
	for(r=0;r<n;r++)
	{  
		    sum=sum+a[r][r];
		}
    printf("sum of diagonal elements=%d",sum);
    getch();
}
