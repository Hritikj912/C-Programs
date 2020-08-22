#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("firstfile","r");
	if(fp==NULL)
	{
		printf("\nCan't create file ,Reading not possible");
		getch();
		exit(0);
	}
	
	printf("YOUR DATA IN FILE\n");
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}
//	printf("\nDATA SAVED SUCCESSFULLY");
	fclose(fp);
	getch();
}
