#include <stdio.h>

int main(void) {
  int numero = 42;
  int *ptrNumero = &numero;
  
  //Imprimir el contenido de la variable
  printf("Contenido de la variable 'numero': %d\n", numero);

  //Imprime la direccion de la variable
   printf("Direccion de la variable 'numero': %p\n", &numero);

  //Imprime el contenido del puntero
  printf("Contenido del puntero 'ptrNumero': %p\n", ptrNumero);

  //Imprime el valor de la variable a la que apunta el puntero
  printf("Valor al que apunta 'ptrNumero': %d\n", *ptrNumero);

  //Imprime la direccion del puntero
  printf("Direccion del puntero 'ptrNumero': %p\n", &ptrNumero);

  // *&puntero imprime la direccion del contenido del puntero

  
  return 0;
}