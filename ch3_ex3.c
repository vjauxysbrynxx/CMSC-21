// performing addition of two fractions

#include <stdio.h>

int main(void)

{ 
    int num1, denom1, num2, denom2, result_num, result_denom;               // variable declaration

    printf("Enter first fraction: ");                                       // prints to ask user for an input
    scanf("%d/%d", &num1, &denom1);                                         // scans user's input and assigns the value to the corresponding variable

    printf("Enter second fraction: ");                                      // same is applied here
    scanf("%d/%d", &num2, &denom2) ;

    result_num = num1 * denom2 + num2 * denom1;                             // solves the resulting numerator
    result_denom = denom1 * denom2;                                         // solves the resulting denominator

    printf("The sum is %d/%d\n", result_num, result_denom);                 // formats it to fraction form and prints the answer 

    return 0;

}