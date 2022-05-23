#include <stdio.h>

#define MAX(a,b) a>b?a:b
#define SALUDO(puntuacion) "hola" puntuacion
inline int max(int a, int b);

int max(int a, int b){ return a>b?a:b; }

int main(void) {
    printf(SALUDO("!\n"));
    printf(SALUDO("?\n"));
    printf(SALUDO(".\n"));
    printf("%d\n", MAX(3,4));
    printf("%f\n", MAX(3.0,4));
    printf("%f", max(3,4));
    return 0;
}