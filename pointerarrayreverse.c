#include <stdio.h>
#include <math.h>

void rev(int a[10]);

int main(){
   int a[10]= {1,2,3,4,5,6,7,8,9,0};
rev(a);
printf("reverse array:\n");
for(int i=0; i<10; i++){ 
    printf("%d", a[i]);

}

    return 0;
}

void rev(int a[10])
{
   int temp;
   int start =0;
   int end =9;

   while(start < end){

    temp = a[start];
    a[start]= a[end];
    a[end]= temp;

    start++;
    end--;
   }

}
