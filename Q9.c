#include <stdio.h>

int main() {
    float fsc_marks, nts_marks;

    printf("Enter F.Sc marks percentage: ");
    scanf("%f", &fsc_marks);
    printf("Enter NTS marks percentage: ");
    scanf("%f", &nts_marks);

    printf("\nEligibility for Oxford University:\n");
    
    if(fsc_marks > 70 && nts_marks >= 70) {
        printf("You can apply to Oxford IT Department\n");
    }
    else if(fsc_marks > 70 && nts_marks >= 60) {
        printf("You can apply to Oxford Electronics Department\n");
    }
    else if(fsc_marks > 70 && nts_marks >= 50) {
        printf("You can apply to Oxford Telecommunication Department\n");
    }
    else {
        printf("Not eligible for Oxford\n");
    }

    printf("\nEligibility for MIT:\n");
    
    if(fsc_marks >= 60 && nts_marks >= 50) {
        printf("You can apply to MIT IT Department\n");
    }
    else if(fsc_marks >= 50 && fsc_marks <= 59 && nts_marks >= 50) {
        printf("You can apply to MIT Chemical Department\n");
    }
    else if(fsc_marks > 40 && fsc_marks < 50 && nts_marks >= 50) {
        printf("You can apply to MIT Computer Department\n");
    }
    else {
        printf("Not eligible for MIT\n");
    }

    return 0;
}
