#include <stdio.h>
#include <math.h>

int main() {
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    printf("%c is %s. \n", ch, (ch > '0' && ch < '9')? "is a digit" : "is not a digit");
    return 0;
}