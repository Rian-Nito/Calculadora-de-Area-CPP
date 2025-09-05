#include <stdio.h>

int area_quadrada(int l) {
    int a = l * l;
    return a;
}

int main() {
    int l = 10;
    printf("Área do Quadrado: %d\n", area_quadrada(l));
    return 0;
}
