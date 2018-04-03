#include    <stdio.h>

double soma(double valor, int enfeites)
{
    if(enfeites == 0)
    {
        printf("%.2f\n%.2f", (double) valor, (double) (valor/21));
        return 0;
    }
    double n_enfeites, preco;
    scanf ( "%lf %lf", &n_enfeites, &preco );
    
    soma(valor + (n_enfeites * preco), enfeites - 1);
}

int main()
{
    double arvore;
    scanf ( "%lf", &arvore );
    soma(arvore, 3);
    
    return 0;
}
