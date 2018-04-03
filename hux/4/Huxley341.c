#include	<stdlib.h>
#include    <stdio.h>
#include    <string.h>
#include    <math.h>

double preco(int years, int dif, double valor)
{
    if(years == 3 && valor <= 45)
    {
        return valor;
    }
    else if(years == 0 && valor <= 45)
    {
        return 45;
    }
    else if(years == 0)
    {
        return valor;
    }

    if(dif == 0)
    {
        if(valor <= 100)
        {
            return preco(years - 1, dif, valor - ( (valor * 0.25) / 2));
        }
        else
        {
            return preco(years - 1, dif, (valor * 0.75) );
        }
    }
    if(dif == 1)
    {
        if(valor <= 100)
        {
            return preco(years - 1, dif, valor - ( (valor * 0.20) / 2));
        }
        else
        {
            return preco(years - 1, dif, (valor * 0.80) );
        }
    }
    if(dif== 2)
    {
        if(valor <= 100)
        {
            return preco(years - 1, dif, valor - ( (valor * 0.18) / 2));
        }
        else
        {
            return preco(years - 1, dif, (valor * 0.82) );
        }
    }
    if(dif== 3)
    {
        if(valor <= 100)
        {
            return preco(years - 1, dif, valor - ( (valor * 0.15) / 2));
        }
        else
        {
            return preco(years - 1, dif, (valor * 0.85) );
        }
    }
    if(dif== 4)
    {
        if(valor <= 100)
        {
            return preco(years - 1, dif, valor - ( (valor * 0.12) / 2));
        }
        else
        {
            return preco(years - 1, dif, (valor * 0.88) );
        }
    }
    if(dif== 5)
    {
        if(valor <= 100)
        {
            return preco(years - 1, dif, valor - ( (valor * 0.10) / 2));
        }
        else
        {
            return preco(years - 1, dif, (valor * 0.90) );
        }
    }
}

double entrada(int anos, int limite, int acumula)
{
    if(acumula == limite)
    {
        return 0;
    }

    double dificuldade, preco_inicial;
    scanf ( "%lf %lf", &dificuldade, &preco_inicial );

    printf("Jogo[%d] = R$%.2lf\n", acumula, (double)preco(anos, dificuldade, preco_inicial));
    entrada(anos, limite, acumula + 1);
}

int main()
{
    int jogos, a;
    a = 3;
    scanf ( "%d", &jogos );
    entrada(a, jogos, 0);

    return 0;
}				/* ----------  end of function main  ---------- */
