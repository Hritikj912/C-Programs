#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[30];
	int age;
}s[10];
void main()
{
	int i=0;
	FILE *fp;
	fp=fopen("sinfo","rb");
	if(fp==NULL)
	{
		printf("\ncan't open file reading impossible");
		getch();
		exit(0);
	}
	printf("INFORMATION OF STUDENTS");
	while(fread(&s[i],sizeof(struct student),1,fp)==1)
	{
		
		printf("\nENTER NAME OF STUDENT %d\n",i+1);
		puts("%s",s[i].name);
		printf("\nENTER AGE OF STUDENT %d\n",i+1);
		printf("%d",s[i].age);
		i++;
}
fclose(fp);
getch();
}
