/**
 * Double a number
 * Compile: gcc main.c -o main.out
 * Run: ./main.out
 */

#include <stdio.h>

// The main function
int main(void) {
  int number;  
  printf("Introduzca el numero que quiera doblar: ");
  scanf("%d", &number);
   
  printf("El doble del numero es : %d\n", number * 2); 

  return 0;
}