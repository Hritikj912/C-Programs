main()
{
	int n,i=1;
	 int fact=1;
	printf("ENTER ANY NUMBER\n");
	scanf("%d",&n);
	while(i!=n+1)
	{
		fact=fact*i;
		i++;
	}
	printf("FACTORIAL OF %d IS %d",n,fact);
}
