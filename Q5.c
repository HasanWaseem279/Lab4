#include<stdio.h>

int main() {
	int consumerid;
	char name;
	float units = 0.0, bill = 0.0, surcharge = 0.0;
	
	printf("Enter The Name (Single Character)\n");
	scanf(" %c", &name);
	
	printf("Enter The Consumer id\n");
	scanf("%d", &consumerid);
	
	printf("Enter Units Consumed\n");
	scanf("%f", &units);
	
	if(units > 0 && units < 200) {
		bill = units * 16.20;
	}
	else if(units >= 200 && units < 300) {
		bill = units * 20.10;
	}
	else if(units >= 300 && units < 500) {
		bill = units * 27.10;
    }
	else if(units >= 500) {
		bill = units * 35.90;
    }
    
    if(bill > 18000) {
    	surcharge = bill * 0.15;
    	bill = bill + surcharge;
	} 
	
	printf("Customer ID : %d\n", consumerid);
	printf("Customer Name: %c\n", name);
	printf("Units Consumed : %.2f\n", units);
	printf("%.2f\n", bill - surcharge);
	if(surcharge > 0) {
	    printf("Surcharge Amount: %.2f\n", surcharge);
	}
	printf("Net Amount Paid by the Customer:\n%.2f\n", bill);
	
	return 0;
}
