#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],l,i=0,e,j,length,k=1;
	printf("Enter any name\n");
	gets(a);
	printf("\n");
	length=strlen(a);
	while(i!=length)
	{
		l=0;
		e=a[i];
		for(k=0;k<length;k++)
		{
			if(e==a[k])
			{
				l++;
			
			}
		}
		 printf("%c",a[i]);
		 printf("%d",l);
		printf("\n");
		i++;
	}
	}
