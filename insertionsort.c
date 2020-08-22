#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,j,temp;
printf("ENTER NO. OF ELEMENTS\n");
scanf("%d",&n);
printf("ENTER %d ELEMENTS IN LIST\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
	temp=a[i];
	j=i-1;
	while(temp<a[j]&&j>=0)
	{
		a[j+i]=a[j];
		j--;
	}
	a[j+i]=temp;
}
	printf("\n FINAL SORTED LIST :\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	getch();
}

