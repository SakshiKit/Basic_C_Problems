#include <stdio.h>
#include <math.h>

int FibonacciSequence(int n);

int main(){
    FibonacciSequence(4);

    return 0;
}

int FibonacciSequence(int n)
{
    if (n == 0){
        return 0;
    }
    if ( n == 1){
        return 1;
    }
  
  int FibNmm = FibonacciSequence(n - 2);
  int FibNm  = FibonacciSequence(n - 1);
  int FibN = FibNmm + FibNm;
  printf(" Fibonacci Sequence is %d\n", FibN);
  return FibN;

}
