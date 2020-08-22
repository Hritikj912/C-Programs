main()
{
	int flag=0,i,n;
	printf("ENTER ANY PRIME NUMBER");
	scanf("%d",&n);
	for(i=1;i<=n-3;i++)
	{
	if((n-2)%i==0)
	flag=1;
     }
	 if(flag==1)
	 printf("TRUE");
	 else
	 printf("FALSE");
}
