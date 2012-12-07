// To convert lower case alphabets to upper case
// the concept being used here is that the ASCII values for
// lower case value (97-122) = Upper case value (65-90) + 32
void main()
{
char a,b;
	printf("Enter a alphabet in lowercase: \n");
	scanf("%c", &a);
	b=a-32;
	// Alternate way
	// b=toupper(a);
    printf("\n Uppercase of %c is %c \n \n", a, b);

}
