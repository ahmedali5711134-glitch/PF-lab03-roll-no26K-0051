#include<stdio.h>

int main() {
    float num;
    printf("enter a decimal number");
    scanf("%f", &num);
    printf("number up to 3 decimal point : %.3f\n", num);
    printf("number up to 1 decimal point : %.1f\n", num);




    return 0;
}