#include <stdio.h>
#include <math.h>

int main(){
int a[10]={1,2,3,4,5,6,7,8,9,0 };

for(int i=0; i< 10; i++){
printf(" the odd numbers %d is %s\n", a[i], (a[i] % 2 != 0) ? "odd" : "even");
}

return 0;
}