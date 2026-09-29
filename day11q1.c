// Q. Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        percentage = (sp - cp) * 100 / cp;
        printf("Profit Percentage = %.2f%%", percentage);
    }
    else if (cp > sp) {
        percentage = (cp - sp) * 100 / cp;
        printf("Loss Percentage = %.2f%%", percentage);
    }
    else {
        printf("No Profit, No Loss");
    }

    return 0;
}
