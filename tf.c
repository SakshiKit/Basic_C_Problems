#include <stdio.h>
#include <math.h>

int main () {
    int a;

    printf("enter a number:");
    scanf("%d", &a);

    printf("%d", a>9 && a<100);
    
   
    return 0;
}