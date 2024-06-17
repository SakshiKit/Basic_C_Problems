#include <stdio.h>

int main() {
    int length,width;
    printf("Enter the length");
    scanf("%d", &length);
    printf("Enter the width");
    scanf("%d", &width);
    printf("perimeter of rectangle is: %d", 2 * length + width);
    return 0;
}