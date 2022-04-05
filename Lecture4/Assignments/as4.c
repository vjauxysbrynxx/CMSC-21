#include <stdio.h>

int main(void) {
    int n,x = 0, y = 1;

    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("\n\n    n       2^n\n------------------\n");
    
    while (x <= n) {
        printf("%5d %8d\n", x, y);
        y *= 2;
        x++;
    }


}