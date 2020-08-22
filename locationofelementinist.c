#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,p,i,e,flag;
	printf("ENTER NUMBER OF ELEMENTS IN LIST\n");
	scanf("%d",&n);
	printf("ENTER %d ELEMENTS IN LIST\n",n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	printf("ENTER ELEMENT WHOSE LOCATION  IS TO BE FIND\n");
	scanf("%d",&e);
	for(i=1;i<=n;i++)
	{
		if(a[i]==e)
	  {
		flag=1;
		break;
	  }
	else 
	flag=0;
	}
	if(flag==1)
       {
		printf("ELEMENT IS FOUND SUCCESSFULLY AT %d POSITON IN LIST\n",i);
       }
	else 
	printf("ELEMENT NOT FOUND IN LIST\n");
	getch();
	
}
