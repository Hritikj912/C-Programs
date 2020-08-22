#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,b=0,m=1;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n!=0)
    { r=n%2;
      n=n/2;
      
      b=b+m*r;
      m=m*10;
	printf("%d",b);
	}
	getch();
}

 
