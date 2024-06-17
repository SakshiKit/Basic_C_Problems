#include <stdio.h>
#include <math.h>

void swap(int a, int b);
void Swap(int *a, int *b);

int main(){
    int a = 3;
    int b =5;
    swap(a,b);
    Swap( &a, &b);


    return 0;
}
// call by value
void swap(int a, int b)
{
    int t = a;
        a = b;
        b = t;
    printf("a is %d & b is %d\n", a , b);
}
 // call by reference
 void Swap(int  *a,int *b)
 {
    int t = *a;
        *a = *b;
        *b = t;
    printf(" *a is %d & *b is %d\n", *a, *b);
 }