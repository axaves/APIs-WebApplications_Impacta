#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Peso
    printf("Digite o seu peso (kg): ");
    scanf("%f", &peso);

    // Altura
    printf("Digite a sua altura (m): ");
    scanf("%f", &altura);

    // Calcular IMC
    imc = peso / (altura * altura);

    // Exibir o resultado do IMC
    printf("Seu IMC é: %.2f\n", imc);

    // Verificar a faixa do IMC
    if (imc < 16) {
        printf("Magreza grave.\n");
    } else if (imc >= 16 && imc <= 16.9) {
        printf("Magreza moderada.\n");
    } else if (imc >= 17 && imc <= 18.5) {
        printf("Magreza leve.\n");
    } else if (imc >= 18.6 && imc <= 24.9) {
        printf("Peso ideal.\n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Sobrepeso.\n");
    } else if (imc >= 30 && imc <= 34.9) {
        printf("Obesidade grau I.\n");
    } else if (imc >= 35 && imc <= 39.9) {
        printf("Obesidade grau II (severa).\n");
    } else {
        printf("Obesidade grau III (mórbida).\n");
    }

    return 0;
}