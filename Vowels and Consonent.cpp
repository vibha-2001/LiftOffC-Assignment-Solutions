#include<stdio.h>

int main()
{
	char c;
	printf("Enter a character");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'A':
			printf("%c is a vowel",c);
			break;
		case 'E':
			printf("%c is a vowel",c);
			break;
		case 'I':
			printf("%c is a vowel",c);
			break;	
		case 'O':
			printf("%c is a vowel",c);
			break;
		case 'U':
			printf("%c is a vowel",c);
			break;
		
		case 'a':
			printf("%c is a vowel",c);
			break;
		case 'e':
			printf("%c is a vowel",c);
			break;
		case 'i':
			printf("%c is a vowel",c);
			break;	
		case 'o':
			printf("%c is a vowel",c);
			break;
		case 'u':
			printf("%c is a vowel",c);
			break;
			
		default: 
			printf("%c is a consonant",c);
	}
	return 0;
}
