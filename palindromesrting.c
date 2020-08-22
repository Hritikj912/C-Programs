#include<stdio.h>
#include<conio.h>
void main()
{
	int n,m,length=0,i=0,flag=0;
	char a[50];
	printf("ENTER ANY STRING\n");
	gets(a);
	while(a[length]!='\0')
	{
		length++;
	}
	m=length;
	length--;
	while(a[length]==a[i]&&length!=i)
	{
		length--;
		i++;
		flag++;
	}
	if(length==flag||length==flag-1)
	{
	 printf("YES,GIVEN STRING IS PALINDROME");
    }
	else
	printf("NO,GIVEN STRING IS NOT PALINDROME");
	getch();
}
