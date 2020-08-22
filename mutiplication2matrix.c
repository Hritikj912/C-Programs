#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,r1,k,r2,c1,c2;
    printf("ENTER NUMBER OF ROWS OF FIRST MATRIX\n");
	scanf("%d",&r1);
	printf("ENTER NUMBER OF COLUMNS OF FIRST MATRIX\n");
	scanf("%d",&c1);
	printf("ENTER ELEMENTS OF FIRST MATRIX\n");
	for(i=0;i<r1;i++)
	{
	  for(j=0;j<c1;j++)
	  scanf("%d",&a[i][j]);
	}
printf("\nNUMBER OF COLUMNS OF FIRST MATRIX IS EQUAL TO NUMBER OF ROWS OF SECOND MATRIX\n");
   printf("\nENTER NUMBER OF ROWS OF SECOND MATRIX\n");
	scanf("%d",&r2);
	printf("ENTER NUMBER OF COLUMNS OF SECOND MATRIX\n");
	scanf("%d",&c2);
	printf("ENTER ELEMENTS OF SECOND MATRIX\n");
	for(i=0;i<r2;i++)
	{
	  for(j=0;j<c2;j++)
	  scanf("%d",&b[i][j]);
	}
	for(i=0;i<r1;i++)
	{
	  for(j=0;j<c2;j++)
	  {
	  	c[i][j]=0;
	  	for(k=0;k<c1;k++)
	  	{
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
	    }
	  }
    }
    printf("**************  MULTIPLICATION OF MATRICES   *****************\n");
    for(i=0;i<r1;i++)
	{
	  for(j=0;j<c2;j++)
	  {
       printf("%d\t",c[i][j]);
      }
      printf("\n");
  }
  getch();
}
