//vowels or consonents
#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
	
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	printf("it is a vowel");
	break;

	default:
	printf("it is a consonent");
	break;
}
	return 0;	
}
