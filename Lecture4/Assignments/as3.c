#include <stdio.h>

int main(void)
{//code 1 for checking
    int i;
    i = 1;
    printf("While Loop:\n");
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }
    
    //equivalent for statement
    printf("\n\nFor Loop:\n");
    for (i=1 ; i <= 128 ; i *= 2) 
        printf("%d ", i);

    return 0;

}