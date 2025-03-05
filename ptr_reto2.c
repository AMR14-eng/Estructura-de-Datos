#include <stdio.h>

int main(void) {
  float pi = 3.1416;
  float *ptr_pi = &pi;
  printf("Direccion de pi: %p\n", &pi);
  printf("Contenido de pi: %f\n", pi);
  printf("Direccion del puntero de pi: %p\n", &ptr_pi);
  printf("Contenido del puntero: %f\n", *ptr_pi);
  return 0;
}