/**
 * La Laguna Univerrsity
 * Higher School of Engineering and Technology
 * Degree in Computer Engineering
 * Basic Computing
 * 
 * @author Bruno Lorenzo Arroyo Pedraza
 * @email bruno.lorenzo.arroyo@gmail.com
 * @date 25/08/2021
 * @brief Program that consists of display on screen the arithmetic mean of 4 
 *        numbers requested from the user.
 */

#include<stdio.h>

int main () {
  int ent1; 
  int ent2; 
  int ent3; 
  int ent4; 
   
  printf("Ingrese el valor del primer entero\n"); 
  scanf("%d", &ent1); 
  printf("Ingrese el valor del segundo entero\n"); 
  scanf("%d", &ent2); 
  printf("Ingrese el valor del tercero entero\n"); 
  scanf("%d", &ent3); 
  printf("Ingrese el valor del cuarto entero\n"); 
  scanf("%d", &ent4); 
 
  printf("La media aritmética es de: %d\n", (ent1 + ent2 + ent3 + ent4) / 4); 
 
  return 0; 
}