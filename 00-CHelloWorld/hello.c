#include <stdio.h>

int main() {
  FILE *fhello_world;
  fhello_world = fopen("output.txt", "w");
  fprintf(fhello_world,"Hello World! :D");
  fclose(fhello_world);
  return 0;
}