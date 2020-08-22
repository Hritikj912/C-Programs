#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("firstfile","w");
	if(fp==NULL)
	{
		printf("\nCan't create file ,writing not possible");
		getch();
		exit(0);
	}
	else
	printf("ENTER SOME DATA IN FILE & PRESS $ AT END\n");
	do
	{
		ch=getche();
		fputc(ch,fp);
	}while(ch!='$');
	printf("DATA SAVED SUCCESSFULLY");
	fclose(fp);
	getch();
}
