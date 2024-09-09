#include<stdio.h>
int main() {
	int N1 = 0, N2 = 0;
	char operator;
	
	printf("Enter First number :\n");
	scanf("%d", &N1);

	printf("Enter Second number :\n");
	scanf("%d", &N2);
	
	printf("Enter the operator(+ or - or * or /) :\n");
	scanf(" %c", &operator);
	
	switch (operator) {
		case'+':
			printf("%d",N1 + N2);	
			break;
		case'-':
			printf("%d", N1 - N2);
			break;
			
		case'*':
			printf("%d", N1 * N2);
			break;
			
		case'/':
			printf("%d", N1 / N2);
			break;
		
		default:
			printf("Enter a valid operator(+ or - or * or /)");					
	
	}	
	
	
	return 0;
}