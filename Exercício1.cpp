#include <stdio.h>
#include <stdlib.h>

float mf,
    m1,
    m2,
    mex1,
    mex2,
    p1,
    p2;

main()
{
    printf("digite o valor de P1 \n");
    scanf("%f", &p1);
    printf("digite o valor de P2 \n");
    scanf("%f", &p2);
    printf("digite o valor de MEX1 \n");
    scanf("%f", &mex1);
    printf("digite o valor de MEX2 \n");
    scanf("%f", &mex2);

    m1 = (p1*0.90)+(mex1*0.10);

    m2 = (p2*0.90)+(mex2*0.10);

    mf = (m1+(2*m2))/3;

    printf("media final e: %f", mf);
}