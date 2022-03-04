// printing with conversion specification 

#include <stdio.h>

int main(void){

    int i,j;            // declaration of variables and their data type
    float x,y;

    i = 10;             // assignment of variables' values
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);         
    // prints the variable's values that follows its corresponding conversion specification placeholders

}