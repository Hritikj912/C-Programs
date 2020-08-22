#include<stdio.h>
void prime(int x);
 int main()
{
 	int i,j,n,flag;
printf("ENTER ANY NUMBER\n");
scanf("%d",&n);
printf("PRIME NUMBERS TILL %d",n);
for(i=1;i<=n;i++)
{
	prime(i);
}
}

void prime(int x)    
{
	int i,flag=1;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			 flag=0;
		break;
		} 
	}
	if(flag==1)
	printf("%d\n",x);
}

