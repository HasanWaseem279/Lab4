#include<stdio.h>
int main() {
	int temp;
	
	printf("Enter Temprature\n");
	scanf("%d",&temp);
	
	if(temp < 0){
		printf("Freezing Weather");
	}
	else if(temp >= 0 && temp < 10){
		printf("Very Cold Weather");
	}
	else if(temp >= 11 && temp < 20){
		printf("Cold Weather");
	}
	else if(temp >= 21 && temp < 30){
		printf("Normal Temprature");
	}
	else if(temp >= 31 && temp < 40){
		printf("Hot Weather");
	}
	else if(temp >= 31 && temp < 40){
		printf("Hot Weather");
	}
	else if(temp = 40){
		printf("Very Hot Weather");
	}
}