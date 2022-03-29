#include <stdio.h>

int main() {
  FILE *fhello_world;
  fhello_world = fopen("helloWorld.txt", "w");
  fprintf(fhello_world,"Hello World");
  fclose(fhello_world);
  return 0;
}