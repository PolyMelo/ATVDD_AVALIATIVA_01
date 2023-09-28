#include<stdio.h>
int main(){
    char nvlExperiencia;
    float salario, novoSalario;

    printf("Informe seu salario: R$");
    scanf("%f", &salario);

    fflush(stdin);

    printf("Informe seu nivel de experiencia (A, B ou C): ");
    scanf("%c", &nvlExperiencia);

    if((nvlExperiencia == 'a') || (nvlExperiencia == 'A')){
        novoSalario = salario + (salario * 0.05);
    } else if((nvlExperiencia == 'b') || (nvlExperiencia == 'b')){
        novoSalario = salario + (salario * 0.07);
    }else if((nvlExperiencia == 'c') || (nvlExperiencia == 'c')){
        novoSalario = salario + (salario * 0.08);
    }

    printf("R$ %.2f\n", novoSalario);

    return 0;
}