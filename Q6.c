#include<stdio.h>
int main() {
	int n;
	
	printf("Enter the Number\n");
	scanf("%d",&n);
	
	if(n>=1 && n<=9){
		printf("one\n");
		printf("two\n");
		printf("three\n");
		printf("four\n");
		printf("five\n");
		printf("six\n");
		printf("seven\n");
		printf("eight\n");
		printf("nine\n");
	}
	else{
		printf("Greater than 9\n");
	}
}