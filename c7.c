#include <stdio.h>
#include <float.h>
int main(void){
    double db;
    float ft;
    db = 1.0/3.0;
    ft = 1.0/3.0;
    printf("float %.4f, double %.4f\n", ft, db);
    printf("float %.12f, double %.12f\n", ft, db);
    printf("float %.16f, double %.16f\n", ft, db);
    printf("FLT_DIG %f, DBL_DIG %f\n", FLT_DIG, DBL_DIG);


    return 0;
}
