#include <stdio.h>
#include <math.h>

int calculateSquareRoot( int number);

int main(){
    int number;
    int squareRoot;
    printf("enter the number:");
    scanf("%d", &number);

     squareRoot = calculateSquareRoot(number);

    printf(" the square root of  %d is : %d\n", number ,squareRoot);



    return 0;
}

int calculateSquareRoot(int number)
{

    return sqrt(number);
}
