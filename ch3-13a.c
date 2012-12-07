// find the reverse of a given string
void main()
{
	char ch;
	int n, r, rev=0;
	printf("Enter a number: \n");
	scanf("%d", &n);
	while(n!=0)
	{
		r=n%10;
		rev = rev*10 +r;
		n=n/10;
	}
	printf("Reverse: %d\n\n", rev);
}




