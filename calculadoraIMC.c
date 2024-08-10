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
    if (imc < 18.5) {
        printf("Magreza.\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Normal.\n");
    } else if (imc >= 24.9 && imc <= 30) {
        printf("Sobrepeso.\n");
    } else if (imc > 30 ) {
        printf("Obesidade.\n");
    } 

    return 0;
}
