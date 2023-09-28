#include <stdio.h>
int main(){
    int x, validacaoOlimpiadasDeVerao = 0, validacaoCopaDoMundo = 0;

    printf("Informe um ano: ");
    scanf("%d", &x);

    if((x >= 1800) && (x <= 2022)){
        for(int i = 1896; i <= 2022; i += 4){
            if(x == i){
                printf("Os Jogos Olimpicos de Verao ocorrem no ano %d.\n", x);
                validacaoOlimpiadasDeVerao = 1;
            }
        }
        for(int i = 1930; i <= 2022; i += 4){
            if(x == i){
                printf("A Copa do Mundo de futebol ocorreu no ano %d.\n", x);
                validacaoCopaDoMundo = 1;
            }
        }
        if((validacaoOlimpiadasDeVerao == 0) && (validacaoCopaDoMundo == 0)){
            printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano %d.\n", x);
        }
    } 

    return 0;
}