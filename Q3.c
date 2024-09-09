#include<stdio.h>
int main() {
	char ch;
	
	printf("Enter The Character : ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z') {
		printf("Small Alphabet");
	}
	else if(ch>='A' && ch<='Z') {
		printf("Capital Alphabet");
	}
	else if(ch>='0' && ch<='9') {
		printf("Digit");
	}
	else{
		printf("Special Char");
	}
	return 0;
}