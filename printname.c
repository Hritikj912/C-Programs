#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char name[20];
	printf("ENTER YOUR NAME\n");
	for(i=1;i<=20;i++)
	{
	 scanf("%c",&name[i]);
	printf("%c",name[i]);
}
}
