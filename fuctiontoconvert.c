#include <stdio.h>
#include <math.h>

float Celis(float celsius);


int main(){
    float celsius = 0;
    printf(" enter the temperature: ");
    scanf("%f", &celsius);
    float fahrenheit = Celis(celsius);
    printf(" conversion is: %.2f\n", fahrenheit);
   
    return 0;
}

    float Celis(float celsius)
{
   float  Farn = (9.0 / 5.0) * celsius;
   float Farnit = Farn + 32;
   return Farnit;
   
}
