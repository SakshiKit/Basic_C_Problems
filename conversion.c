#include <stdio.h>

int main() {
    float celcius;
    printf("enter the celcius");
    scanf("%f", &celcius);

    printf("the fahrenheit is: %f", celcius * 9 / 5 + 32);
    return 0;
}