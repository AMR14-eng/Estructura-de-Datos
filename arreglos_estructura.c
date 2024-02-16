#include <stdio.h>
#include <stdlib.h> 

#define MAX_ESTUDIANTE 3
#define MAX_LONGITUD_NOMBRE 50

//Definicion de estructura para representar a un estudiante
struct estudiante {
int n_registro;
char nombre[MAX_LONGITUD_NOMBRE];
char carrera[MAX_LONGITUD_NOMBRE];
int edad;

} ;

int main(void) {
  //Crear un arreglo de estructuras para los datos del estudiante
  struct estudiante estudiantes[MAX_ESTUDIANTE] = {};
  //Apuntador a arreglo
  struct estudiante *ptr_estudiante = estudiantes;

  //Llena arreglo
  for (int i = 0; i < MAX_ESTUDIANTE; i++){
    printf("Ingrese el numero de registro del estudiante %d: \n", i+1);
    scanf("%d", &estudiantes[i].n_registro);
    printf("Ingrese el nombre del estudiante %d: \n", i+1);
    scanf(" %[^\n]s", estudiantes[i].nombre);
    printf("Ingrese la carrera del estudiante %d: \n", i+1);
    scanf(" %[^\n]s", estudiantes[i].carrera);
    printf("Ingrese la edad del estudiante %d: \n\n", i+1);
    scanf("%d", &estudiantes[i].edad);
  }

  //Imprime arreglo mediante puntero
  for (ptr_estudiante = estudiantes; ptr_estudiante < estudiantes + MAX_ESTUDIANTE; ptr_estudiante++){
    printf("Numero de registro: %d\n", ptr_estudiante->n_registro);
    printf("Nombre del alumno: %s\n", ptr_estudiante->nombre);
    printf("Carrera: %s\n", ptr_estudiante->carrera);
    printf("Edad: %d\n", ptr_estudiante->edad);
  }

  return 0;
}