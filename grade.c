#include<stdio.h>
#include<conio.h>
float main()
{
	float e,m,s,h,sanskrit,t,p;
	printf("What is your marks in English\n");
	scanf("%f",&e);
	printf("What is your marks in Maths\n");
	scanf("%f",&m);
	printf("What is your marks in Science\n");
	scanf("%f",&s);
	printf("What is your marks in Hindi\n");
	scanf("%f",&h);
	printf("What is your marks in sanskrit\n");
	scanf("%f",&sanskrit);
	t=s+m+h+e+sanskrit;
	printf("your total marks in exam=%f\n",t);
	p=t/5;
	printf("percentage=%f\n",p);
	if(p>=60)
	{
		printf("A GRADE");
	}
	else if(p>=45&&p<60)
	{
		printf("B GRADE");
	}
	else if(p>=33&&p<45)
	{
		printf("C GRADE");
	}
	else
	{
	    printf("D GRADE");
	}
	getch();
}
