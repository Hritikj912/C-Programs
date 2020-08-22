#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[30];
	int age;
}s[10];
void main()
{
	int i,n;
	FILE *fp;
	fp=fopen("sinfo","wb");
	if(fp==NULL)
	{
		printf("\ncan't create file writing impossible");
		getch();
		exit(0);
	}
	printf("ENTER TOTAL NUMBER OF STUDENTS\n");
	scanf("%d",&n);
	printf("ENTER INFORMATION OF ALL %d STUDENTS",n);
	for(i=0;i<n;i++)
	{
		
		printf("\nENTER NAME OF STUDENT %d\n",i+1);
		gets("%s",s[i].name);
		printf("\nENTER AGE OF STUDENT %d\n",i+1);
		scanf("%d",s[i].age);
		fwrite(&s[i],sizeof(struct student),1,fp);
}
printf("\nDATA SAVED SUCCESSFULLY");
fclose(fp);
getch();
}
