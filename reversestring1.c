#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
       reverse(str1,0,strlen(str1));
   }

void reverse(char s[20],int i,int j)
{int k,l;
char t;
	for( k=i,l=j-1;k<l/2+1;k++)
	{
		t=s[k];
		s[k]=s[l-k];
		s[l-k]=t;
	}
	printf("The string after reversing is: %s\n",s); 
}
