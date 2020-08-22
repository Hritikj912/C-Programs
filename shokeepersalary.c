main()
{
int item[50];
int noi[50];
int item_name[50];
long monthly_salary=0;
int n,i;
printf("ENTER TOTAL NO. OF ITEMS");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("ENTER NAME OF ITEM %d\n",i+1);
gets(item_name[i]);
printf("ENTER NUMBER OF UNITS SOLD OF ITEM %d\n IN A MONTH",i+1);
scanf("%d",noi[i]);
printf("ENTER PRICE OF ITEM %d\n",i+1);
scanf("%d",&item[i]);
}
for(i=0;i<n;i++)
{
printf("NAME OF ITEM %d:",i+1);
printf("%s\n",item_name[i]);
printf("PRICE OF ITEM %d:",i+1);
printf("%d",item[i]);	
monthly_salary+=item[i]*noi[i];
}
printf("MONTHLY SALARY IS %l",monthly_salary);
}
