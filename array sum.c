#include<stdio.h>
int main()
{
int a[30];
int n,sum,i,j,k,s1,flag=0;
printf("ENTER NUMBER OF ELEMENTS IN ARRAY\n");
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("ENTER SUM ");
scanf("%d",&sum);
for(i=0;i<n;i++)
{s1=a[i];printf("%d",s1);printf(" ");
for(j=1;j<n;j++)
{if((s1+a[j]<=sum)&&flag==0)
 {flag++;s1=s1+a[j];
 printf("%d ",s1);
 }
 for(k=2;k<n;k++)
 {
 if((s1+a[k]==sum)&&flag==1)
 {flag=2;
printf("%d\n",sum);
 }
 break;
 }
}

}
}
