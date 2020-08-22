int val;
int funct()
{
	return val*val;
}
int main()
{
	val=5;
	funct();
	val++;
	printf("%d",funct());
}
