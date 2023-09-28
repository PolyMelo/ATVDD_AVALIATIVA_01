#include<stdio.h>
int main(){
    long int num;
    int soma = 0;

    printf("Informe um numero: ");
    scanf("%ld", &num);

    if((num >= 0) && (num <= 1000000000)){
        if(num % 2 == 0){
            printf("%ld e par.\n", num);
        } else{
            printf("%ld e impar.\n", num);
        }
        int aux = num;
        while (aux != 0) {
            soma   += aux % 10;
            aux  = aux / 10;
        }
    }

    printf("A soma dos algorimos de %ld e %d.\n", num, soma);

    return 0;
}