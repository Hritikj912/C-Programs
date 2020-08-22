#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum;
	printf("Enter no. of terms");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	printf("sum of %d natural numbers= %d",n,sum);
	getch();
}
