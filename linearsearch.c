main()
{
	int n,i,a[20],j=0,num,flag=1;
	printf("ENTER NUMBER OF ELEMENTS:\n");
	scanf("%d",&n);
	printf("ENTER %d INTEGERS IN ARRAY:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ENTER ANY NUMBER TO FIND:\n");
	scanf("%d",&num);
   for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
	  flag=0;
	  printf("%d IS FOUND AT %d POSITION\n",num,i+1);
	  j++;
	    }
	}	
	if(flag==1)
	    printf(" %d IS NOT FOUND",num);
	    else
	    printf("%d IS PRESENT IN ARRAY %d TIMES",num,j);
}
