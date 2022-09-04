#include <stdio.h>
#include "../ketze/facilidades.c"

int main() {
    int a[] = {1,2,3,4}, *pa;
    int b[] = {2,3,4,5};
    pa = a;
    for (int i = 0; i < 4; i++)
    {
        printf("%d", pa);
    }
    printf("%d", pa[0]);
    
    return 0;
}