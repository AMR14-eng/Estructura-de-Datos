

#include <stdio.h>

struct Motor {

  int numeroCilindros;

  float capacidadLitros;
};

struct Llanta {

  int diametroPulgadas;

  char tipo[20];
};

struct Puerta {

  char tipoApertura[20];

  int electrica;
};

struct Auto {

  char marca[20];

  char modelo[20];

  struct Motor motor;

  struct Llanta llantaDelantera;

  struct Llanta llantaTrasera;

  struct Puerta puertaIzquierda;

  struct Puerta puertaDerecha;
};

int main() {
  struct Auto miAuto;
  struct Puerta miPuerta;
  struct Llanta miLlanta;
  struct Motor miMotor;


  // Imprime tamaño en bytes que abarcan las estructuras
  printf("El tamaño de la variable 'Auto' es: %zu bytes\n", sizeof(miAuto));
  printf("El tamaño de la variable 'Puerta' es: %zu bytes\n", sizeof(miPuerta));

  printf("El tamaño de la variable 'Puerta Izquierda' es: %zu bytes\n", sizeof(miAuto.puertaIzquierda));
  printf("El tamaño de la variable 'Puerta' es: %zu bytes\n", sizeof(miAuto.puertaDerecha));
  
  printf("El tamaño de la variable 'Llanta' es: %zu bytes\n", sizeof(miLlanta));
  printf("El tamaño de la variable 'Motor' es: %zu bytes\n", sizeof(miMotor));

  int bitAuto = (sizeof(miAuto) * 8);
  // Imprime tamaño en bytes que abarcan las estructuras
  printf("\nEl tamaño de la variable 'Auto' es: %d bits\n", bitAuto);

  int nibbleAuto = (bitAuto/ 4);
  // Imprime tamaño en nibble que abarcan las estructuras
  printf("El tamaño de la variable 'Auto' es: %d nibble\n", nibbleAuto);
  
}