// writing a simple function which returns a value
int sum(int x, int y)
{
	int z;
	z=x+y;
	return(z);
}
void main()
{
	int a,b,c;
	printf("\nEnter any two numbers:\n");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("\nSum= %d\n",c);
}



