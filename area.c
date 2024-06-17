#include <stdio.h>
#include <math.h>

float areaSquare( float side);
float areaCircle(float radius);
float areaRectangle(float length , float weidth);

int main(){
    float side = 4;
    printf( "are is %f\n", areaSquare(side));

    float radius = 2;
    printf("area is %f\n", areaCircle(radius));

    float length = 2.0;
    float weidth = 4.0;

    printf("area is %f\n", areaRectangle(length, weidth));

    return 0;
}

float areaSquare(float side){
    return side * side;

}


float areaCircle(float radius){
    return 3.142 * radius * radius;
}

float areaRectangle(float length, float weidth)
{
    return 0.0f;
}

float areaRecatangle(float length,float weidth){
     return length * weidth;

}