#include <stdio.h>
#include <math.h>

int sum(int n);

int main(){
    printf("sum is: %d\n", sum(5));
    return 0;
}


int sum(int n) {
    if( n == 1) {
        return 1;
    }
    return n + sum( n-1);
    //int sumNm = sum(n -1);
    //int sumN = sumNm + 1;
   //return sumN;
}