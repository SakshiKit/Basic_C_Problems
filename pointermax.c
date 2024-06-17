
#include <stdio.h>
#include <math.h>

int max(int a, int b);

int main(){
   int num1 = 30;
   int num2 = 20;
   
   int maximum = max(num1, num2);

//printf("Maximum value between %d and %d is: %d\n", num1, num2, maximum);

printf("Maximum value: %d\n", maximum);

    return 0;
}

int max(int a, int b){
    return ( a > b)? a : b;

}