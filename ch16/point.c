#include <stdio.h>
#include <math.h>

struct point {                              // sturcture declare
    int x;
    int y;
};

int main(void){

    struct point p1,p2;                     // structure variable declare
    int xdiff, ydiff;
    double dist;

    printf("Enter coordinates(x y): ");
    scanf("%d %d", &p1.x, &p1.y);           // get a value from user and store in structure variable
    
    printf("Enter coordinates(x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));       // in order to use math library in gcc environment
    printf("Distance: %f\n", dist);                             // we have to put -lm at the end
                                                                // gcc point.c -o point -lm
    return 0;
}