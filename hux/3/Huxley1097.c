#include <stdio.h>
#include <math.h>

void leraltura(double altura, char sexo)
{
    scanf("%c %lf", &sexo, &altura);
    if ( altura <= 0 )
    {
        printf("Altura invalida.");
        return;
    }
    if ( sexo == 'm' )
    {
        double formula = ( 72.7 * altura ) - 58;
        int formulaarredondada = round(formula * 100);
        if ( formula == 0.0  || formulaarredondada % 10 == 0)
        {
            printf("%.1lf\n", formula );
            return;
        }else
        {
            printf("%.2lf\n", formula );
            return;
        }
    }else if( sexo == 'f')
    {
        double formula = ( 62.1 * altura ) - 44.7;
        int formulaarredondada = round(formula * 100);
        if ( formula == 0.0  || formulaarredondada % 10 == 0)
        {
            printf("%.1lf\n", formula );
            return;
        }else
        {
            printf("%.2lf\n", formula );
            return;
        }
    }else
    {
        printf("O sexo informado eh invalido.");
        return;
    }
}
void main()
{
    double a;
    char s;
    leraltura(a, s);
}

      