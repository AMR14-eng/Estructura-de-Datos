#include <stdio.h>

int main(void) {
  int a = 10, b = 30, resultado;
  int *ptr_a = &a;
  int *ptr_b = &b;
  //imprime valores actuales de a y b
  printf("Valor de a: %d \nValor de b: %d\n", a, b);
  //Suma los valores a traves de los punteros
  resultado = *ptr_a + *ptr_b;
  printf("Resultado de suma: %d \n\n", resultado);
  //se cambia el valor de a y vuleve a sumar
  *ptr_a = 30;
  printf("Nuevo valor de a: %d \nValor de b: %d\n", a, b);
  resultado = *ptr_a + *ptr_b;
  printf("Nuevo resultado de suma: %d \n", resultado);
  return 0;
}