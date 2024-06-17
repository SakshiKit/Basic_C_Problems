#include <stdio.h>


void alpha(char start, char end);

int main(){

   alpha('A','Z');



    return 0;
}

void alpha(char start, char end)
{
    for(char ch = start; ch <= end; ch++) {
        printf("%ch\n", ch);

    }
    printf("\n");
}
