#include <stdio.h>
#include <conio.h>
#include <math.h>

float litros = 0;
float valvula = 0;
float PT100 = 0;
float valor1 = 0;
float valor2 = 0;
float valor3 = 0;
char condicao;
char condicaoV;

void Tensao()
{
    printf("Digite 1- para Sensores 0-5V \n");
    printf("Digite 2- para Sensores 0-12V \n");
    scanf("%s", &condicaoV);

    switch (condicaoV)
    {
    case '1':
        printf("Digite um valor de 0-5V \n");
        scanf("%f", &valor1);
        litros = valor1 / 0.01;
        printf("O valor de V e: %.2f", valor1);
        printf("\tV\n");
        printf("O volume do tanque em L e: %.2f", litros);
        printf("\tL\n");

    case '2':
        printf("Digite um valor de 0-12V \n");
        scanf("%f", &valor1);
        litros = valor1 / 0.024;
        printf("O valor de V e: %.2f", valor1);
        printf("\tV\n");
        printf("O volume do tanque em L e: %.2f", litros);
        printf("\tL\n");
    }
}

void Corrente()
{
    printf("Digite o valor da Corrente 4-20mA \n");
    scanf("%f", &valor2);
    valvula = (((valor2-4)*100)/(20-4));
    printf("O valor de mA e: %.2f", valor2);
    printf("\tmA\n");
    printf("ACIONAMENTO DA VALVULA EM PORCENTO: %.2f", valvula);
    printf("\t%%\n");
    }

void Resistencia()
{
    printf("Digite a Resistencia Ohmica do Sensor \n");
    scanf("%f", &valor3);
    PT100 = ((valor3 / 100) - 1) / 0.00391;
    printf("O valor da Resistencia Ohmica e: %.2f", valor3);
    printf("\tOhms\n");
    printf("TEMPERATURA APROXIMADA DE: %.2f", PT100);
    printf("\tC\n");
}

int main()
{
    printf("Digite V- para Tensao \n");
    printf("Digite I- para Corrente \n");
    printf("Digite R- para Resistencia em Ohms \n");
    scanf("%s", &condicao);

    switch (condicao)
    {
    case 'V':
        Tensao();
        break;
    case 'I':
        Corrente();
        break;
    case 'R':
        Resistencia();
        break;
    }

    if (condicao != 'V' && condicao != 'I' && condicao != 'R')
    {
        printf("OPERACAO INVALIDA -- VERIFICAR O SIMBOLO DA OPERACAO");
    }
    getch();
}
