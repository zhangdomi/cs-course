#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    double x; double y;
}point;

typedef struct{
    point centerpoint;
    double r;
}circle;


int main()
{
    circle k= {{3.0, 2.0}, 1.5};

    printf("The O point is: %lf %lf\n", k.centerpoint.x, k.centerpoint.y);
    printf("The radius is %lf ", k.r);
    return 0;
}
