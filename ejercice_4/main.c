/**
 * La Laguna Univerrsity
 * Higher School of Engineering and Technology
 * Degree in Computer Engineering
 * Basic Computing
 * 
 * @author Bruno Lorenzo Arroyo Pedraza
 * @email bruno.lorenzo.arroyo@gmail.com
 * @date 25/08/2021
 * @brief Request the radius of a circle and show the length and area of 
          ​​the circle.
 */

#include <stdio.h>
#include <math.h>

#define PI 3.141592

// Main function of the program
int main() {
  int radius;
  printf("ingrese el valor del radio\n"); 
  scanf("%d", &radius);

  printf("La longitud de la circunferencia es: %.2f\n", 2 * radius * PI); 
  printf("El área de la circunferencia es: %.2f\n", radius * radius * PI);  
  
  return 0; 
}
