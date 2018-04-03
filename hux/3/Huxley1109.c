#include	<stdlib.h>
#include    <stdio.h>
#include    <string.h>
#include    <math.h>

int gyro(int meta_questoes, int meta_linhas, int maior_n, int maior_dia, int dia)
{
    if(dia > 7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", meta_questoes);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", meta_linhas);

        if(maior_n == 0)
        {
            printf("DIA QUE MAIS PRODUZIU: NENHUM\n");
        }
        else
        {
            if(maior_dia == 1)
            {
                printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
            }
            if(maior_dia == 2)
            {
                printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
            }
            if(maior_dia == 3)
            {
                printf("DIA QUE MAIS PRODUZIU: TERCA\n");
            }
            if(maior_dia == 4)
            {
                printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
            }
            if(maior_dia == 5)
            {
                printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
            }
            if(maior_dia == 6)
            {
                printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
            }
            if(maior_dia == 7)
            {
                printf("DIA QUE MAIS PRODUZIU: SABADO\n");
            }
        }

        return 0;

    }

    int questoes, linhas, ratio;
    scanf ( "%d\n", &questoes );
    scanf ( "%d\n", &linhas );

    if(questoes >= 5)
    {
        meta_questoes = meta_questoes + 1;
    }
    if(linhas >= 100)
    {
        meta_linhas = meta_linhas + 1;
    }

    if(linhas >= maior_n)
    {
        gyro(meta_questoes, meta_linhas, linhas, dia, dia + 1);
    }
    else
    {
        gyro(meta_questoes, meta_linhas, maior_n, maior_dia, dia + 1);
    }

}
int main()
{
    gyro(0, 0, 0, 1, 1);
    return 0;
}				
