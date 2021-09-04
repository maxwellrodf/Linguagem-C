//EXERCICIO 1 DA LISTA 2
//Elaborar um programa que lê um número real e avise na tela se este número está no intervalo entre 50 e 150. 

#include <stdio.h>
#include <stdlib.h>

//********************DECLARAÇÃO DE VARIÁVEIS************
float valor;

main()
{
    //*****************ENTRADA DE DADOS******************
printf("digite o valor \n");
scanf("%f", &valor); //LEIA VALOR

//*********************CONDICIONAIS**********************
if (valor >=50 && valor <=150)
{
    printf("o valor esta entre 50 e 150");
}
else
{
    printf("o valor NAO ESTA entre 50 e 150");
}
}