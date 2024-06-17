#include <stdio.h>
#include <math.h>

int sum( int a, int  b);

int main(){
    int a = 5;
    int b = 69;
    
    int result = sum(a,b);

    printf(" the sum of %d and %d is: %d\n", a, b, result);
    return 0;
}


int sum(int a, int b)
{
    int  sumResult = a + b;
    printf(" the sum of digit: %d\n", sumResult);
    return sumResult;
}
