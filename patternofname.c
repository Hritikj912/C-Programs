#include<stdio.h>
#include<string.h>
void main()
{
	char a[40],i,j,length;
	printf("Enter any name\n");
	gets(a);
	printf("\n");
	length=strlen(a);
	for(i=0;i<length;i++)
	{
		for(j=0;j<=length-i-1;j++)
		{
			printf(" ");
		}
		printf("%c",a[i]);
		 printf("\n");
	}

getch();
}
