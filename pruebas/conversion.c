#include <stdio.h>

#define BASE 0
#define LIMIT 300
#define STEP 20

// Es mas eficiente usar los define
// const int LOWER = 0, LIMIT = 300, STEP = 20;

// headers
void fahrToCelWhile();
void fahrToCelFor();
void fahrToCelInverse();
void celToFahrFor();
void tableForFunc(void (*func)());

// With int the results are truncated
void fahrToCelWhile() {
    int fahr, cels;
    fahr = BASE;
    while (fahr <= LIMIT)
    {
        cels = 5 * (fahr - 32) / 9;
        printf("%4d | %6d\n", fahr, cels);
        fahr = fahr + STEP;
    }
}

// Results with float of 2 decimal points
void fahrToCelFor() {
    //(°F - 32) x 5/9 =°C
    for (int fahr = BASE; fahr <= LIMIT; fahr = fahr + STEP) {
        printf("%4d | %6.2f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}

void fahrToCelInverse() {
    for (int fahr = LIMIT; fahr >= BASE; fahr = fahr - STEP) {
        printf("%4d | %6.2f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
};

void celToFahrFor() {
    //(°C x 9/5) + 32 =°F
    for (int cels = BASE; cels <= LIMIT; cels = cels + STEP) {
        printf("%4d | %6d\n", cels, 32 + (cels * 9/5));
    }
}

void tableForFunc(void (*func)()) {
    printf("--------------\n");
    printf("fahr | cel\n");
    printf("--------------\n");
    func();
    printf("--------------\n");
}

int main(void) {
    tableForFunc(fahrToCelFor);
    printf("\n");
    tableForFunc(fahrToCelInverse);
    printf("\n");
    tableForFunc(celToFahrFor);
    //fahrToCelWhile();
    return 0;
}