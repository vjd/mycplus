// Read a number and generate that many multiplication tables
void main()
{
int i,n,j;
	printf("Enter a number: \n");
	scanf("%d",&n);
	printf("\t");
for (i=1;i<=n;i++)
	printf("%5d",i);
	printf("\n\n");
	
for (i=1;i<=20;i++)
	{
	printf("%d\t",i);
	for (j=1;j<=n;j++)
	{		
	printf("%5d",i*j);
}
	printf("\n");
}

	printf("\n");
}
