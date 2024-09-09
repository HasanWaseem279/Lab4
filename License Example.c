#include<stdio.h>
int main() {
	int age;
	char Name;
	
	printf("Enter Name :\n");
	scanf("%c", &Name);
	
	printf("Enter Age :\n");
	scanf("%d", &age);
	
	if(age >= 18) {
		printf("License Granted");
	}
	else{
		printf("Licence Denied");
	}
	
	
	
}