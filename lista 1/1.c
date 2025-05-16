#include <stdio.h>

int main(){
    int N;

    printf("informe um numero");

    scanf("%i", &N);
    if(N >10)
    {
        printf("eh maior que 10");
    }else{
        printf("eh menor que 10");
    }
    return 0;
}