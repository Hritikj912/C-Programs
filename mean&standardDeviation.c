#include<math.h>
#include<stdio.h>
main()
{
	int n,i;
	float sum,a[50];
	printf("ENTER NUMBER OF ELEMENTS\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("ENTER NUMBER %d: ",i+1);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	printf("MEAN IS %.3f\n",(sum/n));
	float mean=sum/n;
	float ssum;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]-mean;
		if(a[i]<0)
		{
			a[i]=-a[i];
		}
		a[i]=a[i]*a[i];
		ssum=ssum+a[i];
	}
	ssum=ssum/n;
	printf("POPULATION VARIANCE IS %f\n",ssum);
	printf("POPULATION STANDARD DEVIATION IS %f",sqrt(ssum));

}
