#include <stdio.h>

struct point {                                      // declare structure
    int x;
    int y;
};

struct rect {                                       // structure in structure
    struct point p1;
    struct point p2;
};

int main(void){
    struct rect r;                                  // declare structure variable
    int w, h, area, peri;

    printf("Enter left-top coordinate: ");
    scanf("%d %d", &r.p1.x, &r.p1.y);               // get a value from user
    
    printf("Enter right-bottom coordinate: ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = r.p1.x - r.p2.x;
    h = r.p1.y - r.p2.y;

    area = w * h;
    peri = 2 * w + 2 * h;
    printf("Area: %d\n", area);
    printf("Perimeter %d\n", peri);

    return 0;
}