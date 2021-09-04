//EXERCICIO 3 DA LISTA 2
//Elaborar um programa que calcule a soma de dois números quaisquer e apresente na tela o resultado dessa soma. Caso a soma seja superior a 30 indicar qual é o maior valor entre eles. 

#include <stdio.h>
#include <stdlib.h>

//*********************DECLARAÇÃO DAS VARIAVEIS***********************
float valor1, valor2, soma, maior;

main()
{
    //********************ENTRADA DE DADOS****************************
printf("digite o valor1 \n");
scanf("%f", &valor1);
printf("digite o valor2 \n");
scanf("%f", &valor2);

//***********************CALCULO PARA A SOMA DOS VALORES**************
soma = valor1+valor2; //FAZ AS SOMAS DOS VALORES

printf("A Soma e: %f\t", soma);

//***********************CONDICIONAIS OU TOMADAS DE DECISAO***********
if(soma>30){ //DEFINE O MAIOR NUMERO
    if(valor1>valor2)
    maior = valor1;
    else
    maior = valor2;

    printf("SOMA: %f\t: MAIOR: %f\t", soma, maior);
}

else{
    if(valor2>valor1)
    maior = valor2;
    else
    maior = valor1;
}

}