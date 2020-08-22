#include<stdio.h>
#include<conio.h>
int main()
{
	int a,d,n,i;
	printf("Enter first term & common difference ");
	scanf("%d%d",&a,&d);
	printf("Enter no. of terms\n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	printf("%d\t",a+i*d);
	getch();
}
