#include <stdio.h>
#include <math.h>

void DoWork( int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a = 5;
    int b = 5;
    int sum, prod, avg;
    DoWork( a , b, &sum, &prod, &avg);

    printf("*sum is %d\n,*prod is %d\n,*avg is %d\n", sum, prod, avg);
    return 0;
}

void DoWork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = a + b / 2;
}
