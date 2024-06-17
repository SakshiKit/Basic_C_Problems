#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    
    if (isPrime(num)) 
    {
        printf( "%d is a prime number", num);
    } 
    else {
        printf( "%d  is not a prime number", num);
    }



    
    int isPrime(int num) {
    if (num <=1) {
        return 0; // not prime
    }
     for (int i=2; i * i <= num; i++){
        if(num % i == 0){
        return 0; //  not prime
     }
    }
    return 1;// prime
    }
}


   