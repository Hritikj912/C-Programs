#include <stdio.h>
void merge(int a[], int m, int b[], int n, int sorted[]);
int main() 
{
int a[100], b[100], m, n, c, sorted[200];

/* a[100] and b[100] are the two given arrays and m and n are the their respective sizes. c is a counter and sorted[200] is the final sorted array */

scanf("%d", &m); //Number of elements in the first array

  for (c = 0; c < m; c++) 
    {
    scanf("%d", &a[c]); //Elements of first array is read
    }

  scanf("%d", &n); //Number of elements in second array

  for (c = 0; c < n; c++) 
  {
    scanf("%d", &b[c]); //Elements of second array is read
  }

 merge(a, m, b, n, sorted); 

//The merged function is called where the two arrays are merged and sorted.

  printf("Sorted array:\n");

  for (c = 0; c < m + n; c++) {
    printf("%d\n", sorted[c]);
  }

  return 0;
}
 
void merge(int a[],int m,int b[],int n,int sorted[])
{
  int i,j,k,l,flag=0;
  for(i=0,j=0,k=0;k!=m+n;)
  {
   if(a[i]<=b[j])
   { sorted[k]=a[i];
   i++;
    k++;
   }
   else if(a[i]>b[j])
   {
    sorted[k]=b[j];
    j++;
     k++;
   }
    else if(i==m)
    {l=m+1;
     m=j;
     flag=1;
      break;
    }
      else if(j==n)
    {l=n+1;
     m=i;
     flag=2;
      break;
    }

  }
    if(flag==1)
  {
    for(i=l,j=m;i<m+n;i++,j++)
    {
      sorted[i]=b[j];
    }
  }
    else if(flag==2)
  {
    for(i=l,j=n;i<m+n;i++,j++)
    {
      sorted[i]=a[j];
    }
  }
  
}
    
    
