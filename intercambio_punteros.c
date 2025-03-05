#include <stdio.h>

void intercambiar(int *a, int *b, int *arreglo){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {
  int num1 = 5;
  int num2 = 10;
  int arreglo[5] = {};
  
  printf("Antes del intercambio: %d, num 2: %d\n", num1, num2);

  intercambiar(&num1, &num2, arreglo);

  printf("Despues del intercambio: %d, num 2: %d\n", num1, num2);
  return 0;
}