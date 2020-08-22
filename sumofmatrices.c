#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],s[10][10],n,r,c,sum=0;
	printf("ENTER DEGREE OF MATRICES\n");
	scanf("%d",&n);
	printf("ENTER ELEMENTS OF 1ST MATRIX\n");
	for(r=0;r<n;r++)
	{
	     for(c=0;c<n;c++)
	    scanf("%d",&a[r][c]);
	}
	printf("ENTER ELEMENTS OF 2nd MATRIX\n");
	for(r=0;r<n;r++)
	{
	     for(c=0;c<n;c++)
	    scanf("%d",&b[r][c]);
	}
	printf("SUM OF MATRICES=\n");
	for(r=0;r<n;r++)
	{
	     for(c=0;c<n;c++)
	    {
		 printf("%d\t",s[r][c]=a[r][c]+b[r][c]);
	    }
	    printf("\n");
	}
	getch();
}
