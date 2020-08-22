#include<stdio.h>
#include<conio.h>
struct student{
	char name[30];
	char address[50];
	int age;
}s;
void main()
{
	printf("ENTER NAME OF STUDENT\n");
	gets(s.name);
	printf("ADDRESS\n");
	gets(s.address);
	printf("AGE\n");
	fflush(stdin);
	scanf("%d",&s.age);
	printf("NAME OF STUDENT\n");
	puts(s.name);
	printf("ADDRESS\n");
	puts(s.address);
	printf("AGE\n");
	fflush(stdin);
	printf("%d",s.age);
	getch();
}
