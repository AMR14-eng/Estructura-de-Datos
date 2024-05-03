#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definición de la estructura del nodo
struct Node {
    int data;
    struct Node *next;
};

// Función para crear una lista vacía
struct Node* createEmptyList() {
    return NULL;
}

// Función para agregar un nodo al final de la lista
struct Node* append(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("No se pudo asignar memoria \n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// Función para imprimir la lista
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Función para buscar un elemento en la lista
struct Node* search(struct Node* head, int key) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// Función para eliminar un nodo de la lista
struct Node* removed(struct Node* head, int key) {
    struct Node* element = search(head, key);
    if (element == NULL) {
        printf("El elemento %d no se encuentra en la lista.\n", key);
        return head;
    }
    if (element == head) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct Node* current = head;
    while (current->next != element) {
        current = current->next;
    }
    current->next = element->next;
    free(element);
    return head;
}

// Función para obtener el tamaño de la lista
int size(struct Node* head) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main(void) {
  struct Node* myList = createEmptyList();
  srand(time(NULL));
  int numJ;
  int randomNum;

  // Agregar 5 elementos a la lista
  for (int i = 0; i < 5; i++) {
    randomNum = rand() % 10 + 1;
    myList = append(myList, randomNum); 
  }

  // Juego
  while(size(myList) < 10) {
    printf("Adivina un numero de la lista del 1 al 10: \n");
    scanf("%d", &numJ);

    // Buscar el número en la lista
    struct Node* foundNode = search(myList, numJ);
    if (foundNode != NULL) {
      printf("¡Bien, adivinaste! continua jugando\n");
      myList = removed(myList, numJ);
    } else {
      int intentos = 9 - size(myList);
      printf("Sorry, ese numero no es\n");
      printf("Te quedan %d intentos\n", intentos);
      randomNum = rand() % 10 + 1;
      myList = append(myList, randomNum);
    }
    
  }
  /* Imprimir la lista actualizada
  printf("Lista actualizada: ");
  printList(myList);*/
  
  if (size(myList) == 10){
    printf("Perdiste, Suerte para la proxima :(");
  }else{
    printf("Puro exito!\n");
  }

  return 0;
}
