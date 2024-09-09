#include<stdio.h>
int main() {
	float cost= 0.0, finalcost = 0.0, ammSaved = 0.0;
	
	printf("Enter Cost\n");
	scanf("%f", &cost);
	
	if(cost >= 500 && cost< 2000) {
		finalcost = (cost*0.95);
		ammSaved = (cost*0.05);
	}
	else if(cost>=2000 && cost < 4000 ){
		finalcost = (cost*0.90);
		ammSaved = (cost*0.1);
	}
	else if(cost>=4000 && cost < 6000) {
		finalcost = (cost*0.80);
		ammSaved = (cost*0.2);
	}
	else if( cost > 6000){
		finalcost = (cost*0.65);
		ammSaved = (cost*0.35);
	}
	if(cost < 500){
		return 0;
	}
	printf("Actual Cost : %f\n", cost);
	printf("Cost after discount : %f\n", finalcost);
	printf("Ammount saved : %f",ammSaved);
	return 0;
}