#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total, percentage;

    printf("Enter marks of subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &sub3);

    total = sub1 + sub2 + sub3;
    percentage = (total / 300) * 100;  // assuming each subject is out of 100

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
