#include <stdio.h>
#include <math.h>

int main(){
  float price[3];
  printf(" enter the price:\n");
  scanf("%f", &price[0]);
  scanf("%f", &price[1]);
  scanf("%f", &price[2]);

printf("total price 1: %.2f\n", price[0] + (0.18 * price[0]));
printf("total price 2:%.2f\n", price[1] + (0.18 * price[1]));
printf("total price 3:%.2f\n", price[2] + (0.18 * price[2]));

return 0;
}