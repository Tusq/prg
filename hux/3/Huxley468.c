#include	<stdlib.h>
#include    <stdio.h>
#include    <string.h>
#include    <math.h>

double desconto(int limit, int contador)
{
    if(limit == 0)
    {
        printf("%d\n", contador);
        return 0;
    }
    
    double total, friday, ratio;
    scanf("%lf %lf", &total, &friday);
    ratio = (total * 0.8);
    
    if(total <= friday)
    {
        desconto(limit - 1, contador);
    }
    else if(ratio >= friday)
    {
        desconto(limit - 1, contador + 1);
    }
    else
    {
        desconto(limit - 1, contador);
    }

}

int main()
{
    int qnt_produtos = 5;
    desconto(qnt_produtos, 0);

    return 0;
}				
