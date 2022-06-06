#include <stdio.h>
#include <math.h>

struct line{
    struct point{
        float x;
        float y;
    }point1, point2;
    float *midpoint;
    float slope;
    float distance;
};

float solveSlope(struct line line){                                                     // Slope
    float slope = (line.point1.y - line.point2.y) / (line.point1.x - line.point2.x);    // (y2-y1) / (x2-x2)
    return slope;
}

void *solveMidpoint(struct line *line){                                                 // Midpoint
    float x,y;                                                                          
    x =  (line->point1.x + line->point2.x)/2;                                           // x = (x1 + x2) / 2
    y = (line->point1.y + line->point2.y)/2;       
    line->midpoint[0] = x; line->midpoint[1] = y; 
}

float solveDistance(struct line line){                                                  // Distance
    float point1, point2, distance;                                                     // sqrt[(x1-x2)^2+(y1-y2)^2]
    point1 = line.point2.x - line.point1.x;
    point2 = line.point2.y - line.point1.y;
    distance = sqrt((point1 * point1) + (point2 * point2));
    return distance;
}

void getSLopeInterceptForm (struct line line){                                          // Slope-Intercept Form
    printf ("\ny = %gx + %g", 
        solveSlope(line),line.point2.y - (solveSlope(line),line.point2.y * line.point2.x)); 
}

int main(void){
    struct line line;                                                                   // Declaration of struct variable

    printf ("Enter x and y for point1: ");                                              // Input for point 1
    scanf ("%f %f", &line.point1.x, &line.point1.y);

    printf ("Enter x and y for line2: ");                                               // Input for point 2
    scanf ("%f %f", &line.point2.x, &line.point2.y);

    printf("\nPoint 1:                     (%g,%g)", line.point1.x, line.point1.y);
    printf("\nPoint 2:                     (%g,%g)", line.point2.x, line.point2.y);

    line.slope = solveSlope(line);                                                      // Storing it to struct members
    line.distance =  solveDistance(line);
    solveMidpoint(&line);

                                                                                        // OUTPUT
    printf("\nSlope:                       %g",  line.slope);
    printf("\nMidpoint:                    (%g,%g)", line.midpoint[0], line.midpoint[1]);
    printf("\nDistance between two points: %g", line.distance);
    getSLopeInterceptForm(line);
    
    return 0;
}
