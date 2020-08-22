main()
{
	int n1,n2,k,i,a[100],m,larg,l;
	printf("Enter any two numbers");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
{	i=n1-1;
		while(i>=0)
	{
		if(n1%i==0&&n2%i==0)
		{
			a[k]=i;
			k++;
		}
		i--;

    }
}
	else
{	i=n2-1;
		while(i>=0)
	{
		if(n1%i==0&&n2%i==0)
		{
			a[k]=i;
			k++;
		}
		i--;
    }
}
   k=0;
	larg=a[0];
	for(m=0;m<=k;m++)
	{
		if(a[m]<a[m+1])
		{
			larg=a[m+1];
		}
		else
		continue;
	}
		 printf("GCD:%d",larg);
	
}

