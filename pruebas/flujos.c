#include <stdio.h>

int main() {
  // Va al output.txt
  FILE *fhelloWorld = fopen("output.txt", "w");
  fprintf(fhelloWorld,"Hello World en TXT! :D");
  printf("Hello World al stdout! :D");
  fclose(fhelloWorld);

  // Cambio el flujo del stdout al salida.txt
  freopen("salida.txt", "w", stdout);
  printf("Hola");
  return 0;
}