#include<math.h>
main()
{
float a,sd,b,c,d;
printf("Enter coeficient of x^2");
scanf("%f",&a);
printf("Enter coeficient of x");
scanf("%f",&b);
printf("Enter constant of quadratic equation");
scanf("%f",&c);
d=(b*b)-4*a*c;
sd=sqrt(d);
if(d>0)
{
	printf("Roots of equation are real and unequal");
	printf("Roots: %f and %f",(-b+sd)/2*a,(-b-sd)/2*a);
	
}
else if(d==0)
{
	printf("Roots of equation are real and equal");
	printf("Roots: %f and %f",(-b)/2*a,(-b)/2*a);

}
else if(d<0)
{
	printf("Roots are imaginary");
	printf("Roots: (%.0f+v%.0f)/%.0f and (%.0f-v%.0f)/%.0f ",-b,d,2*a,-b,d,2*a);
}
}

