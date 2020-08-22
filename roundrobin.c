#include<stdio.h>
#include<conio.h>
void main()
{
int st[10],bt[10],wt[10],tat[10],n,tq;
int i,count=0,swt=0,stat=0,temp,sq=0;
float awt=0.0,atat=0.0;
printf("Enter number of processes:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter burst time for sequences%d",i);
scanf("%d",&bt[i]);
st[i]=bt[i];
}
printf("Enter time quantum:");
scanf("%d",&tq);
while(1)
{
for(i=0,count=0;i<n;i++)
{
temp=tq;
// printf("temp=%d",temp);
if(st[i]==0)
{
// printf("===%d",st[i]);
count++;
continue;
}
if(st[i]>tq)
st[i]=st[i]-tq;
else
if(st[i]>=0)
{
temp=st[i];
st[i]=0;
printf("\ntemp=%d",temp);
}
sq=sq+temp;
tat[i]=sq;
printf("\n%d\t%d\t",i,tat[i]);
}
if(n==count)
break;
}
for(i=0;i<n;i++)
{
printf("\nturn around time%d\t%d",i,tat[i]);
wt[i]=tat[i]-bt[i];
printf("\nwaiting time%d\t%d",i,wt[i]);
swt=swt+wt[i];
stat=stat+tat[i];
}
awt=(float)swt/n;
atat=(float)stat/n;
printf("\nProcess_no Burst time Wait time Turn around time");
for(i=0;i<n;i++)
printf("\n%d %d %d %d",i,bt[i],wt[i],tat[i]);
printf("\nAvg wait time is %f \nAvg turn around time is %f",awt,atat);
getch();
}
