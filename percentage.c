#include <stdio.h>
#include <math.h>

float marksScience( float marks1);
float marksMaths(float marks2);
float marksSanskrit(float marks3);



int main(){
     float marks1 = 70;
     float marks2 = 89.8;
     float marks3 = 98.9;
     float percentage;
     int total =300;
     float value;
     value = marks1 + marks2 + marks3;
     percentage = value / total * 100;

     printf(" the percentage is : %.2f\n", percentage);
    return 0;
}

float marksScience(float marks1)
{

    return 0.0f;
}

float marksMaths(float marks2)
{
    return 0.0f;
}

float marksSanskrit(float marks3)
{
    return 0.0f;
}
