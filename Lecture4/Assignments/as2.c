#include <stdio.h>

int main(void) {

    int i = 1;
    printf("While Loop: ");
    while (i < 10) {
        printf("%d  ", i);
        i++;
    }

    i = 1;
    printf("\n\nFor Loop: ");
    for (; i < 10; i++) {
        printf("%d  ", i);
        
    }

    i = 1;
    printf("\n\nDo-While Loop: ");
    do{
        printf ("%d  ", i);
        i++;
    }
    while (i < 10);

    return 0;

}