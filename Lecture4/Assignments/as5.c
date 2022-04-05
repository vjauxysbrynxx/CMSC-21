#include <stdio.h>

int main(void) {
    int month, week, day, n = 1;

    //to determine the number of days in a month
    while(1) {
        printf("Enter number of days in month (28, 30, or 31): \n");
        scanf("%d", &month);    

        if (month < 28 || month > 31) {
            printf("Invalid input! Try again.\n");
        }
        else break;
    }

    //to determine which day of the week will the calendar start
    while (1) {
        printf("Enter the starting day of the week (1=Sun, 7=Sat): \n");
        scanf("%d", &week);                     

        if (week < 1 || week > 7) {             //number of days a week is only 7
            printf("Invalid input! Try again.\n");
        }
        else break;
    }

    //Printing the calendar
    printf("   S   M   T   W   T   F   S\n");
    while (n < week) {                          //prints spaces to align the starting date to the corresponding column 
        printf("    ");
        n++;
    }

    for (n = 1; n <= month; n++) {              //prints the dates with correct spacing for the right alignment 
        printf("%4d", n);

        if (n % 7 == ((8 - week) % 7)) {        //marks the last day of the week and prints a new line to start to sunday again
            printf("\n");
        }
    }

    return 0;
}