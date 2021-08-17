/**
 * Un programa que acepta 5 argumentos enteros
 * Imprime la suma de los numeros impares ingresados
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int q = a + b;

  printf("%d, %d, %d\n", q, a, b );
  return 0;
}
