#include <stdio.h>

int main() {
    float fsc_marks, nts_marks;

    printf("Enter your F.Sc marks percentage: ");
    scanf("%f", &fsc_marks);
    printf("Enter your NTS marks percentage: ");
    scanf("%f", &nts_marks);

    printf("\nChecking eligibility for Oxford University:\n");
    if (fsc_marks > 70 && nts_marks >= 70) {
        printf("Eligible for Oxford University - IT Department\n");
    } else if (fsc_marks > 70 && nts_marks >= 60) {
        printf("Eligible for Oxford University - Electronics Department\n");
    } else if (fsc_marks > 70 && nts_marks >= 50) {
        printf("Eligible for Oxford University - Telecommunication Department\n");
    } else {
        printf("Not eligible for any department at Oxford University.\n");
    }

    printf("\nChecking eligibility for MIT:\n");
    if (fsc_marks >= 60 && nts_marks >= 50) {
        printf("Eligible for MIT - IT Department\n");
    } else if (fsc_marks >= 50 && fsc_marks <= 59 && nts_marks >= 50) {
        printf("Eligible for MIT - Chemical Department\n");
    } else if (fsc_marks > 40 && fsc_marks < 50 && nts_marks >= 50) {
        printf("Eligible for MIT - Computer Department\n");
    } else {
        printf("Not eligible for any department at MIT.\n");
    }

    return 0;
}
