/**
 * Un programa que acepta dos argumentos x e y (numeros reales)
 * e imprima la distancia euclídea entre el origen y el punto (x,y)
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
    int temp = b;
    b = a % b;
    a = temp;
  printf("%d\n", a, b);
  return 0;
}
