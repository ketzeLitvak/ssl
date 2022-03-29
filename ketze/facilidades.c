#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef MAX
#define MAX 100
#endif

void clean(){
    system("cls");
}

void line(int cantidad){
    char linea[MAX];
    strcpy(linea, "");
    for (int i = 0; i < cantidad; i++)
    {
        strcat(linea, "-");
    }
    printf(linea);
}

void space(int cantidadEspacios) {
    for (int i = 1; i<= cantidadEspacios; i++){
        printf("\n");
    }
}

void frame(char texto[]){
    char barra[MAX];
    strcpy(barra, " ");
    int length = strlen(texto);
    for (int i = 0; i < length + 2; i++)
    {
        strcat(barra, "-");
    }
    // Resultado
    printf("%s\n", barra);
    printf("%s%s%s\n", "| ", texto, " |");
    printf(barra);
}