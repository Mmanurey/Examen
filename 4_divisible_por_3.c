/**
 * Un programa que recibe dos argumentos enteros a y b
 * Si a > b el programa termina e imprime el mensaje:
 * Error: a tiene que ser menor o igual a b
 * Si a <= b el programa busca e imprime todos los enteros divisibles por 3
 * en el rango [a, b]
 * Ejemplo:
 * $ ./divisible 1 20
 * 3 6 9 12 15 18
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int r = a / b;
  printf("%d, %d, %d\n", a, b, r);
  return 0;
}
