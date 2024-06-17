#include <stdio.h>
#include <math.h>

int main(){


    int x;
    int smallestnumbers = 1;
    printf("enter the value of x");
    scanf("%d", &x);

    printf("^d \n", x, (x<1 && x>9)? "smallest number" : " not a smallest number");
    return 0;
}