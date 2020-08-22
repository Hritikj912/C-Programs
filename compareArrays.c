#include<stdlib.h>
main()
{
	float a[20];
	printf("ENTER NUMBER OF ELEMENT IN ARRAY 1:\n");
	int n1,i;
	scanf("%d",&n1);
	printf("ENTER ELEMENTS IN ARRAY 1:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%f",&a[i]);
	}
	float b[20];
	printf("ENTER NUMBER OF ELEMENT IN ARRAY 2:\n");
	int n2;
	scanf("%d",&n2);
	if(n1!=n2)
	{
		printf("BOTH ARRAY ARE NOT EQUAL\n");
		exit(0);
	}
	else
	{
	printf("ENTER ELEMENTS IN ARRAY 2:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%f",&b[i]);
	}
	int flag=0;
	for(i=0;i<n1;i++)
	{
		if(a[i]==b[i])
	{flag=1;
	continue;
		}	
		else
		{
			printf("BOTH ARRAYS ARE NOT EQUAL");
			break;
		}
	}
	if(flag==1)
	printf("BOTH ARRAYS ARE EQUAL");
   }
}
