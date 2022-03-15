//reversing the order of a 2-digit number
#include <stdio.h>
    int main (void) {
        int num, ones;

        printf ("Please enter a 2-digit number:\n");
        scanf ("%d", &num);

        ones = num%10;                                  //to isolate the ones digit
        num = (num/10)+(ones*10);                       //to move the tens digit to the ones place
                                                        //then added by the ones digit multiplied by 10 so it becomes the tens digit.

        printf("Reverse: %d", num);

        return 0;

    }