#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void llenarArreglo(int arreglo[], int tamano) {

  for (int i = 0; i < tamano; i++) {

    printf("Ingresa un numero\n");
    scanf("%d", &arreglo[i]);
  }
}

void imprimirArreglo(int arreglo[], int tamano) {
  for (int i = 0; i < tamano; i++) {
    printf("%d_", arreglo[i]);
  }
}

void aleatorios(int arreglo[], int tamano){
  srand(time(NULL)); //INICIA semilla del generador aleatorio
  for (int i = 0; i < tamano; i++){
    arreglo[i] = rand() % 100; //Genera un numero aleatorio entre 0 y 99
  }
}

void ordenarBurbuja(int arreglo[], int tamano) {
  for (int i = 0; i < tamano - 1; i++) {

    for (int j = 0; j < tamano - i - 1; j++) {
      if (arreglo[j] > arreglo[j + 1]) {
        int temp = arreglo[j];
        arreglo[j] = arreglo[j + 1];
        arreglo[j + 1] = temp;
      }
    }
  }
}

int main(void) {
  int tamano;

  clock_t start, end;
  start = clock();
  double cpu_time_used;

  // Pedir al usuario que ingrese el tamaño del arreglo
  printf("Ingrese el tamaño del arreglo: ");
  scanf("%d", &tamano);

  int arreglo[tamano];

  // Llenar el arreglo con valores ingresados por el usuario
  //llenarArreglo(arreglo, tamano);
  aleatorios(arreglo, tamano);

  printf("\nArreglo original: ");
  imprimirArreglo(arreglo, tamano);

  ordenarBurbuja(arreglo, tamano);

  printf("\nArreglo ordenado: ");
  imprimirArreglo(arreglo, tamano);

  end = clock();
  double elapsed_time = ((double)(end - start)) / CLOCKS_PER_SEC;
  printf("\nSe tardo %f segundos\n", elapsed_time);
  return 0;
}