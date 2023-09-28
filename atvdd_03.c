#include<stdio.h>
int main(){
    int senha, confSenha;

    printf("Informe a senha de 4 digitos que deseja cadastrar: ");
    scanf("%d", &senha);

    printf("Senha cadastrada: %d\n", senha);

    if((senha >= 1000) && (senha <= 9999)){
        do{
            printf("Confirme sua senha: ");
            scanf("%d", &confSenha);
            if(confSenha == senha){
                printf("Senha valida!\n");
            } else{
                printf("Senha invalida!\n");
            }
        } while(confSenha != senha);
    }

    return 0;
}