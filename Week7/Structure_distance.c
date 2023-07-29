#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
        double x; double y;
    1}vector;

    vector v_difference(vector a, vector b){
        vector c;
        c.x = a.x -b.x;
        c.y = a.y -b.y;
        return c;
    }

int main()
{
    vector v1, v2, v3, v4;
    v1.x = 1.0; v1.y = 2.0;
    v2.x = 2.0; v2.y = 4.0;
    v3 = v_difference(v1, v2);
    double v_4 = sqrt((v2.x-v1.x)*(v2.x-v1.x) + (v2.y-v1.y)*(v2.y-v1.y));
    printf("%lf %lf\n", v3.x, v3.y);
    printf("%lf ", v_4);
    return 0;
}
