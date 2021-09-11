//EXERCICIO 4 DA LISTA 2 COM SWITCH CASE
//Elaborar um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA = [(N1 + N2*2 + N3*3 + ME)/7]. A partir da média, informar o conceito de acordo com a tabela

#include <stdio.h>
#include <stdlib.h>

float N1, 
N2,
N3,
ME,
MA;

char CONCEITO;

main()
{
    //************ENTRADA DAS NOTAS***********
printf("digite a nota 1 \n");
scanf("%f", &N1); //LEIA A NOTA 1
printf("digite a nota 2 \n");
scanf("%f", &N2); //LEIA A NOTA 2
printf("digite a nota 3 \n");
scanf("%f", &N3); //LEIA A NOTA 3
printf("digite a MEDIA DOS EXERCICIOS \n");
scanf("%f", &ME); //LEIA A MEDIA DOS EXERCICIOS

    //************CALCULO PARA A MEDIA DE APROVEITAMENTO DO ALUNO************
MA = (N1+(N2*2)+(N3*3)+ME)/7;

    //************CONDICIONAIS PARA MOSTRAR O CONCEITO***********************
printf("O Valor de MA e: %f\t", MA);

if(MA>=9){
    printf("CONCEITO: A\n");
    CONCEITO = 'A';
}
else if(MA>=7.5&&MA<9){
    printf("CONCEITO: B\n");
    CONCEITO = 'B';
}
else if(MA>=6&&MA<7.5){
    printf("CONCEITO: C\n");
    CONCEITO = 'C';
}
else if(MA>=4&&MA<6){
    printf("CONCEITO: D\n");
    CONCEITO = 'D';
}
else if(MA<4){
    printf("CONCEITO: E\n");
    CONCEITO = 'E';
}
switch (CONCEITO)
{
case 'A':
printf("RESULTADO:\tA - APROVADO COM EXCELENCIA \n");
break;

case 'B':
printf("RESULTADO:\tB - APROVADO \n");
break;

case 'C':
printf("RESULTADO:\tC - EM RECUPERACAO PARCIAL \n");
break;

case 'D':
printf("RESULTADO:\tD - EM RECUPERACAO CONTINUA \n");
break;

case 'E':
printf("RESULTADO:\tE - REPROVADO \n");
break;
}
}