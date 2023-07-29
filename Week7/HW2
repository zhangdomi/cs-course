#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{
    double x; double y;
}Centerp;

typedef struct{
    Centerp O;
    double r;
}Circle;

int Overlap(Circle a, Circle b){
    if(sqrt((a.O.x-b.O.x)*(a.O.x-b.O.x)+(a.O.y-b.O.y)*(a.O.y-b.O.y))< (a.r+b.r))
        return 1;
    else
        return 0;
}

int main()
{
    Circle c1, c2;
    printf("Enter the parameters for your first and second circle:\n");
    scanf("%d %d %d, %d %d %d", &c1.O.x, &c1.O.y, &c1.r, &c2.O.x, &c2.O.y, &c2.r);
    if(Overlap(c1, c2) ==1)
        printf("The circles overlap");
    else
        printf("The circle do NOT overlap");
    return 0;
}
