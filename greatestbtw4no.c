#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf("Enter any 4 Numbers\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
   	if(a>b)
	{
		if(a>c&&a>d)
		printf("%d is greatest number",a);
	}
	if(b>a)
	{
	    if(b>c&&b>d)
		printf("%d is greatest number",b);
	}
	if(c>b)
	{
		if(c>a&&c>d)
		printf("%d is greatest number",c);
	}
		if(d>b)
	{
		if(d>c&&a<d)
		printf("%d is greatest number",d);
	}
	if(a==b)
    {
    	if(b==c&&b==d)
    	printf("All are equal");
	}
		getch();
}
