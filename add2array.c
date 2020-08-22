#include<stdio.h>
#include<stdlib.h>

void main()
{
 int i,n;
  scanf("%d", &n);
 int a[n];
int b[n];
int c[n];
//The number of elements in each array is taken from test case data 

for(i=0; i<n; i++)
 {
 scanf("%d\n",a[i]);
 }
for(i=0; i<n; i++)
 {
  scanf("%d\n",b[i]);
 }
for(i=0; i<n; i++)
 {
  *(c+i)=*(a+i)+*(b+i);
 }
 printf("Result is\n");

 for(i=0; i<n; i++)
 {
  printf("%d\n",*(c+i));
 }

}    

