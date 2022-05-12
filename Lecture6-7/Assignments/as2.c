#include <stdio.h>
#include <stdbool.h>

#define N_Array 8       //defining size of 2d array

int main(){

//initialization
    char *letter[] = {"A", "B", "C", "D", "E", "F", "G", "H", 
                      "  A", "  B", "[C]", "[D]", "  E", "  F", "  G", "  H"};

    int road_networks[N_Array][N_Array] = { [0][0] = 1, [0][1] = 1, [0][5] = 1,     //using designated initializer to initialize this multidimentional array as short as possible
                                [1][0] = 1, [1][1] = 1, [1][2] = 1,
                                [2][1] = 1, [2][2] = 1, [2][4] = 1, [2][5] = 1,
                                [3][3] = 1, [3][4] = 1,
                                [4][3] = 1, [4][4] = 1,
                                [5][0] = 1, [5][2] = 1, [5][5] = 1,
                                [6][0] = 1, [6][3] = 1, [6][6] = 1,
                                [7][5] = 1, [7][7] = 1 }, 
                            
                                location;

//printing the matrix
    printf("          A       B      [C]     [D]      E       F       G       H\n");    //column 
    for (int row = 0; row < N_Array; row++){                                            //row
        printf("%s", letter[8 + row]);                                                  //using loop to print the arra
        for (int col = 0; col < N_Array; col++){
            printf("%8d", road_networks[row][col]);   
        }
        printf("\n");
    }

//user prompt

    printf("\nWhich point are you located?\n\n");
    printf("\t(0) - Point A\n");
    printf("\t(1) - Point B\n");
    printf("\t(2) - Point C\n");
    printf("\t(3) - Point D\n");
    printf("\t(4) - Point E\n");
    printf("\t(5) - Point F\n");
    printf("\t(6) - Point G\n");
    printf("\t(7) - Point H\n");
    
//main loop

ask_again:

    printf("\nPlease input your location: ");
    scanf("%d", &location);

    if (location < 0 || location > 7){              //input validation
        printf("Invalid input. Please try again.");
        goto ask_again;                             //benz, using goto is a bad practice :<
    }
    else;

    printf("\n\nAt point: %s \n", letter[location]);

    if (road_networks[location][2] == 1){           //to check if the user input is just a point away from C charging station
        printf("Now at point %s \n", letter[2]);    //print current position
        printf("Arrived at nearest charging station point: %s", letter[2]);
    }

    else if (road_networks[location][3] == 1){      //to check if the user input is just a point away from D charging station
        printf("Now at point %s \n", letter[3]);    //print current position
        printf("Arrived at nearest charging station point: %s", letter[3]);
    }

    else{   

        for (int point = 0; point < N_Array; point++){          

            if (road_networks[location][point] == 1){           //to check intersections if true
                printf("Now at point %s \n", letter[point]);    //print current position

                if (point == 2){                                //check if you've reached the destination
                    printf("Arrived at nearest charging station point: %s", letter[point]);
                    break;
                }

                else if (point == 3){                           //check if you've reached the destination
                    printf("Arrived at nearest charging station point: %s", letter[point]);
                    break;
                }

                else if (location == point);                    //pass if the current iteration is also the current position to avoid infinite loop

                else{                                           //if the intersection is true but it's not the destination yet
                    location = point;
                }
            }

            else if (point == 7){                               //if the point counter reaches 7 and found no true intersection, the counter resets to 0 
                    point = 0;
            }
        }        
    }
    

    return 0;
}