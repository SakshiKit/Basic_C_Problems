#include <stdio.h>
#include <math.h>

int main(){
    int n;
    do{
        printf("enter thr number n\n:");
        scanf("%d", &n);
        printf("%d\n", n);

        if( n % 2 !=0){
            break;
        }
    } while(1);
    printf("odd\n");
    
 return 0;
}