//reversing the order of a 3-digit number
#include <stdio.h>
    int main (void) {
        int num, ones, tens;

        printf ("Please enter a 3-digit number:\n");
        scanf ("%d", &num);

        ones = num%10;                                  //isolating the ones digit
        num = (num/10);                                 //updating the user given to proceed
        tens = num%10;                                  //isolating the tens digit
        num = (num/10)+(tens*10)+(ones*100);            //the last division of 10 leaves the original hundreds digit 
                                                        //to be a single digit moving it to ones place
        /*the tens and ones digit will then be multiplied to the right x10 multiplier to put them in their new respective places*/

        printf("Reverse: %d", num);
        
        return 0;

    }