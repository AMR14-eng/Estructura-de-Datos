#include <stdio.h>

int main(void) {
  int numero = 42;
  //definir un puntero a entero y asignarle la direccion de la variable
  int *ptr_numero = &numero;
  //imprimir el valor de la variable
  printf("Valor de la variable: %d \n", *ptr_numero);
  //imprimir la direccion de la variable
  printf("%p \n", ptr_numero);
  //cambiar la direccion de la variable a traves del puntero
  *ptr_numero = 99;
  // imprimir nuevo valor de numero a traves de la variable
  printf("Valor de la variable numero: %d \n", numero);
  //imprimir el nuevo valor de numero a traves del puntero
  printf("Nuevo valor de la variable: %d \n", *ptr_numero);
  
  return 0;
}