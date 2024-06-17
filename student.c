
#include <stdio.h>
#include <math.h>

int main() {

   int marks;
   printf("enter the marks:");
   scanf("%d", &marks);

   if( marks > 30){
    printf("student pass\n");
   }
   else {
     printf("student fail\n");
   }
   return 0;


} 