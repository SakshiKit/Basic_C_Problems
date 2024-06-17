#include <stdio.h>
#include <math.h>

void Hot();
void Cold();


int main (){
    int n;
    printf(" enter the value of n:");
    scanf("%d", &n);
    
    if ( n > 10){
        Hot();
    } else {
        Cold();
    }

    return 0;
}
void Hot()
{
   printf(" Hot\n");
}

void Cold()
{
   printf(" Cold\n");
}
