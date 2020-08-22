#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s1,s2,n;
	int a[100];
	int b[100];
	printf("ENTER NUMBER OF ELEMENTS IN ARRAYS\n");
	scanf("%d",&n);
	//BOTH ELEMENTS HAVE SAME NUMBER OF ELEMENTS
	printf("ENTER ELEMENTS IN ARRAY 1\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ENTER ELEMENTS IN ARRAY 2\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("AVERAGE OF ELEMENTS OF ARRAY 1\n");
	for(i=0;i<n;i++)
	{
		s1=s1+a[i];
	}
	printf("%d",s1/n);
	printf("\nAVERAGE OF ELEMENTS OF ARRAY 2\n");
	for(i=0;i<n;i++)
	{
		s2=s2+b[i];
	}
	printf("%d",s2/n);
	if(s1>s2)
	{
		printf("AVERAGE OF ARRAY 'A' IS GREATER\n");
	}
	else
	printf("\nAVERAGE OF ARRAY 'B' IS GREATER\n");
	getch();
}
