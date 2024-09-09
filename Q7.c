#include<stdio.h>
int main() {
	
	int sv;
	printf("Enter Sensor value");
	scanf("%d",&sv);
	if(sv >= 0 && sv<=100){
		printf("Evening\n");
	}
	else if(sv >= 101 && sv<=500){
		 printf("Lightning\n");
	}
	else if(sv>500){
		 printf("Exposed Under Sunshine\n");
    }
	
}