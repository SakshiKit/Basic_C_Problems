#include <stdio.h>
#include <math.h>

int main() {
    // even if you get 1
    // odd if you get 0
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("%d", a % 2 == 0);
    return 0;
}