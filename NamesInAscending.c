#include <stdio.h>
#include <string.h>
    int main()
    {
        char name[20][10], temp[10];
        int i, n;
 
        scanf("%d", &n); //Total no. of names is entered from test case
     
 
        for (i = 0; i < n; i++) 
        {
            scanf("%s", name[i]); //names are accepted from the test case
        
        }
    int j;
	    for (i = 0; i < n; i++) 
        {
   for( j=0;j<n-i-1;j++)
   {
   if(name[j][0]>name[j+1][0])
   {
     char c[100];
     strcpy(c,name[j]);
     strcpy(name[j],name[j+1]);
     strcpy(name[j+1],c);
        }
           else if(name[j][0]==name[j+1][0])
   {if(name[j][1]>name[j+1][1])
   {
     char c[100];
     strcpy(c,name[j]);
     strcpy(name[j],name[j+1]);
     strcpy(name[j+1],c);
        }
   }
 }
 }
 printf("Names in Sorted order\n");
        for (i = 0; i < n; i++) 
        {
            printf("%s\n", name[i]);
        }

    }//closing of main()
