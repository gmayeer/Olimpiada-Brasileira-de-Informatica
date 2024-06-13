#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 5


int main(){
    char diroriginal[size];
    char diroasis[size];
    char originalchar;
    char oasischar;

    int diroriginalint;
    int diroasisint;
    int angmin;
    do{
        scanf("%s", diroriginal);

        if(strcmp(diroriginal, "norte") == 0)
            originalchar = 'n';
        if(strcmp(diroriginal, "leste") == 0)
            originalchar = 'l';
        if(strcmp(diroriginal, "sul") == 0)
            originalchar = 's';
        if(strcmp(diroriginal, "oeste") == 0)
            originalchar = 'o';
    }while(originalchar != 'n' && originalchar != 'l' && originalchar != 's' && originalchar != 'o');
    do{
        scanf("%s", diroasis);

        if(strcmp(diroasis, "norte") == 0)
            oasischar = 'n';
        if(strcmp(diroasis, "leste") == 0)
            oasischar = 'l';
        if(strcmp(diroasis, "sul") == 0)
            oasischar = 's';
        if(strcmp(diroasis, "oeste") == 0)
            oasischar = 'o';
    }while(oasischar != 'n' && oasischar != 'l' && oasischar != 's' && oasischar != 'o');

    if(originalchar == 'n')
        diroriginalint = 1;
    if(originalchar == 'l')
        diroriginalint = 2;
    if(originalchar == 's')
        diroriginalint = 3;
    if(originalchar == 'o')
        diroriginalint = 4;

    if(oasischar == 'n')
        diroasisint = 1;
    if(oasischar == 'l')
        diroasisint = 2;
    if(oasischar == 's')
        diroasisint = 3;
    if(oasischar == 'o')
        diroasisint = 4;

    int diferenca = diroriginalint - diroasisint;

    if(diferenca == 0)
        angmin = 0;
    if(diferenca == 1 || diferenca == -3 || diferenca == 3 || diferenca == -1)
        angmin = 90;
    if(diferenca == 2 || diferenca == -2)
        angmin = 180;

    printf("%d", angmin);

    return 0;
}
