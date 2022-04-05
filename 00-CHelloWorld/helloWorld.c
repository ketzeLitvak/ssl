/*  Hello World
    Hello World a txt
    Ezequiel Litvak
    4/4/2022
*/

#include <stdio.h>

int main(void) {
  FILE *fhelloWorld = fopen("output.txt", "w");
  fprintf(fhelloWorld,"Hello World en TXT! :D");
  printf("Hello World al stdout! :D");
  fclose(fhelloWorld);
  return 0;
}