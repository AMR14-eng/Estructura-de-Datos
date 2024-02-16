#include <stdio.h>

int main(void) {
  int arreglo[5]= {0,2,4,6,8};

  int *puntero = arreglo;

  for (int i = 0; i < 5; i++){
    printf("Elemento %d: %d %p\n", i , *puntero, *&puntero);
    puntero++;
  }
  return 0;
}