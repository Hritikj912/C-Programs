#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],i,j,length;
	printf("Enter any name");
	gets(a);
	printf("\n");
	length=strlen(a);
	for(i=0;i<length;i++)
	{
		if(a[i]>96)
		printf("%c",a[i]-32);
		else if(a[i]==' ')
		printf(" ");
		else
		printf("%c",a[i]+32);
	}
getch();
}
