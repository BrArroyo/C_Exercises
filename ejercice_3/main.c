/**
 * Program that allows determining the refund that a customer will 
 *        receive when purchasing a product, having paid with a 100 bill.
 */

#include <stdio.h>

#define BILL 100

// Main function of the program
int main(void) {
  float cost;
  printf("Ingrese el valor del producto\n");
  scanf("%f", &cost);
   
  printf("El vuelto es: %.2f\n", BILL - cost);

  return 0; 
}