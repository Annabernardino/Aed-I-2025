#include <stdio.h>

int main() {
    int N;
    
    printf("Informe um numero entre 100 e 1000: ");
    scanf("%i", &N);

    if (N >= 100 && N <= 1000) {
        printf("Esta entre 100 e 1000");
    } else {
        printf("Nao esta entre 100 e 1000");
    }
    
    return 0;
}