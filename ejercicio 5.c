/*Cristian Ariel Lopez Santiago
Este programa define un valor por defecto para el tamaño del arreglo de tal manera que
si el tamaño de éste cambia, solo se debe modificar el valor de la constante MAX. */

#include <stdio.h>
#define MAX 5
int main ()
{
  int arreglo[MAX], cont; //arreglo es un conjunto de variables en un contenedor, estan dados por un indice que identifica a cada uno de las casillas
  for (cont=0; cont<MAX; cont++) //el contador va indicar el numero de la caja del contenedor desfazado por 1. Se llena al arreglo por elementos uno por uno
  {
      printf("Ingrese el valor %d del arreglo: ", cont+1);
      scanf("%i", &arreglo[cont]);
  }

  printf("El valor ingresado para cada elemento del arreglo es:\n[");
  for (cont=0; cont<MAX; cont++)
  {
      printf("%d\t", arreglo[cont]);
  }
  printf("]\n");
  return 0;
} //Este ejercicio es la unica forma de imprimir los arreglos
