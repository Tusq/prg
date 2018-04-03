#include <stdio.h> 
#include <math.h>

int prox_impar(int num)
{
    if(num % 2 != 0)
    {
        return num;
    }
    else
    {
        return prox_impar(num + 1);
    }
    return 0;
}

double serie(int limitador, double numerador, double  denominador, double total_serie, int alternador, int impar, int ebin)
{
    if(limitador == 0)
    {
        printf("S: %.2lf\n", total_serie);
        return 0;
    }

    total_serie = (double) (total_serie + (numerador/denominador));
    
    if(alternador % 2 != 0)
    {
        denominador = numerador * 2;
        numerador = prox_impar(impar);
        serie(limitador - 1, numerador, denominador, total_serie, alternador + 1, numerador + 1, ebin + 1);
    }
    if(alternador % 2 == 0)
    {
        numerador = denominador * 2;
        denominador = 3 * ebin;
        serie(limitador - 1, numerador, denominador, total_serie, alternador + 1, impar, ebin);
    }
    return 0;
}

int main()
{   
    int numero, numerador_padrao, denominador_padrao;
    numerador_padrao = 2;
    denominador_padrao = 3;
    scanf("%d", &numero);
    if(numero == 1)
    {
        printf("S: 1.0\n");
    }
    else if(numero == 0)
    {
        printf("S: 0.0\n");
    }
    else
    {
        serie(numero - 1, numerador_padrao, denominador_padrao, 1, 1, denominador_padrao, 1); 
    }

    return 0;
}
