#include<stdio.h>
int main(){
    long int a, b;

    printf("Informe o primeiro valor: ");
    scanf("%ld", &a);

    printf("Informe o segundo valor: ");
    scanf("%ld", &b);

    if(a == b){
        printf("Os valores lidos sao iguais.\n");
    } else{
        if(a > b){
            printf("%ld e maior do que %ld\n", a, b);
            if(a % b == 0){
                printf("%ld e multiplo de %ld\n", a, b);
            } else{
                printf("%ld nao e multiplo de %ld\n", a, b);
            }
        } else{
            printf("%ld e maior do que %ld\n", b, a);
            if(b % a == 0){
                printf("%ld e multiplo de %ld\n", b, a);
            } else{
                printf("%ld nao e multiplo de %ld\n", b, a);
            }
        }
    }

    return 0;
}