#include <stdio.h>
#include <conio.h>
#include <math.h>

//**************************VARIAVEIS GLOBAIS***************************//
float x = 0;
float y = 0;
float resultado;
char operacao;
float potX = 0;
float potY = 0;
float raizX = 0;
float raizY = 0;
float ultimocalculo = 0;

void soma()
{
    resultado = x + y;
    printf("O Resultado e: \n %f", resultado);
}
void sub()
{
    resultado = x - y;
    printf("O Resultado e: \n %f", resultado);
}
void multiplicacao()
{
    resultado = x * y;
    printf("O Resultado e: \n %f", resultado);
}
void divisao()
{
    resultado = x / y;
    printf("O Resultado e: \n %f", resultado);
}
void potencia2()
{
    potX = pow(x, 2);
    potY = pow(y, 2);
    printf("O Resultado de X e: \n %f", potX);
    printf("\n");
    printf("O Resultado de Y e: \n %f", potY);
}
void potencia3()
{
    potX = pow(x, 3);
    potY = pow(y, 3);
    printf("O Resultado de X e: \n %f", potX);
    printf("\n");
    printf("O Resultado de Y e: \n %f", potY);
}
void potencia4()
{
    potX = pow(x, 4);
    potY = pow(y, 4);
    printf("O Resultado de X e: \n %f", potX);
    printf("\n");
    printf("O Resultado de Y e: \n %f", potY);
}
void raiz()
{
    raizX = sqrt(x);
    raizY = sqrt(y);
    printf("O Resultado de X e: \n %f", raizX);
    printf("\n");
    printf("O Resultado de Y e: \n %f", raizY);
}
void expressao()
{
    potX = pow(x, 2);
    potY = pow(y, 3);
    ultimocalculo = potX + potY;
    printf("O Resultado de X^2 + Y^3 e: \n %f", ultimocalculo);
}

main()
{
    printf("Digite o simbolo da operacao matematica \n");
    scanf("%s", &operacao);
    printf("Digite o valor de X \n");
    scanf("%f", &x);
    printf("Digite o valor de Y \n");
    scanf("%f", &y);

    switch (operacao)
    {
    case '+':
        soma();
        break;

    case '-':
        sub();
        break;

    case '*':
        multiplicacao();
        break;

    case '/':
        divisao();
        break;

    case '#':
        potencia2();
        break;

    case '@':
        potencia3();
        break;

    case '&':
        potencia4();
        break;

    case '$':
        raiz();
        break;

    case '%':
        expressao();
        break;
    }
        if (operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/' && operacao != '#' && operacao != '@' && operacao != '&' && operacao != '$' && operacao != '%')
        {
            printf("OPERACAO INVALIDA -- VERIFICAR O SIMBOLO DA OPERACAO");
        }
}
