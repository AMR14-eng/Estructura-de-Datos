#include <stdio.h>

int palindromos(int n) {
  int original = n;
  int digito, Invertido = 0, respuesta;
  while (n > 0) {
    // Guarda el resto de la division para asi guardar cada digito
    digito = n % 10;
    // Invierte el numero directamente
    Invertido = Invertido * 10 + digito;
    n = n/10;
  }
  return (original == Invertido);
}

int main(void) {
  int num, temp, respuesta, mayorPalindromo = 0;
  for (int i = 999; i >= 100; i--) {
    for (int j = i; j >= 100; j--) {
      num = i * j;
      if (palindromos(num)&&num>mayorPalindromo) {
        mayorPalindromo = num;
      }
    }
  }
  printf("Mayor Palindromo %d\n", mayorPalindromo);
  return 0;
}