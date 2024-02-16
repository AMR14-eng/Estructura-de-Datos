#include <stdio.h>

int main(void) {
  float calif[7] = {7,4, 9, 0 ,8,9.2,7.7};
  float decimas[7] = {0.4,0.5,0.5,0.2,.1,0.3,0.1};
  float nota[7];

  float *ptrCalif = calif;
  float *ptrDecimas = decimas;
  float *ptrNota = nota;

  for (int i = 0; i < 7; i++){
    nota[i] = *ptrCalif + *ptrDecimas;
    ptrCalif++;
    ptrDecimas++;
    }

  for(int i = 0; i < 7; i++){
    printf("Calificacion estudiante %d: %.1f %p\n", i+1, nota[i], *&ptrNota);
    ptrNota++;
  }

  printf("\nDireccion del puntero: %p\n", &ptrNota);
  printf("Valor al que apunta la direccion que guarda el puntero: %.1f\n", *ptrNota);
  

  return 0;
}