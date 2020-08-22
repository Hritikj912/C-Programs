#include<stdio.h>
#include<conio.h>
void main()
{
	int a,d,n,N;
	printf("Enter first term of AP\n");
	scanf("%d",&a);
	printf("Enter common difference of AP\n");
	scanf("%d",&d);
	printf("Enter number of terms of AP\n");
	scanf("%d",&n);
	 N=a+(n-1)*d;
	printf("the %dth term of AP=%d",n,N);
	getch();
}
