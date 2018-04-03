#include	<stdlib.h>
#include    <stdio.h>
#include    <string.h>
#include    <math.h>

double roundabout(double num)
{
    int decimal = round(num * 100);

    if(decimal % 10 == 0)
    {
        printf("%.1lf\n", num);
    }
    else
    {
        printf("%.2lf\n", num);
    }
    return 0;
}

double calc(double dolar, double aliquota, double produto, double frete )
{
    double ICMS, imposto_total, imposto_rs, total_total;
    int yes;
    double produto_rs = (dolar * produto);
    double frete_rs = (dolar * frete);
    double total_rs = (produto_rs + frete_rs);

    if(produto >= 2500)
    {
        imposto_rs = (produto_rs * 0.60);
        ICMS = ((produto_rs * 1.6) / (1-(aliquota/100)) - (produto_rs)-(produto_rs * 0.6));
        imposto_total = (ICMS + imposto_rs);
        total_total = (produto_rs * 1.6) + frete_rs + ICMS;
        yes = 0;
    }
    else
    {
        imposto_rs = (total_rs * 0.60);
        ICMS = ((total_rs * 1.6) / (1-(aliquota/100)) - (total_rs )-(total_rs * 0.6));
        imposto_total = (ICMS + imposto_rs);
        total_total = (total_rs * 1.6) + ICMS;
        yes = 1;
    }

    roundabout(dolar);   
    roundabout(produto_rs);   
    roundabout(frete_rs);   
    roundabout(total_rs);   
    roundabout(imposto_rs);   
    roundabout(ICMS);   
    roundabout(imposto_total);   
    roundabout(total_total);   
//    printf("%.2lf\n", dolar);
//    printf("%.2lf\n", produto_rs);
//    printf("%.2lf\n", frete_rs);
//    printf("%.2lf\n", total_rs);
//    printf("%lf\n", imposto_rs);
//    printf("%.2lf\n", ICMS);
//    printf("%.2lf\n", imposto_total);
//    printf("%.2lf\n", total_total);
//    
    if(yes == 0)
    {
        printf("Impostos calculados sem o frete\n");
    }
    if(yes == 1) 
    {
        printf("Impostos calculados com o frete\n");
    }
    
    return 0; 
}

int main()
{
    double dolar, aliquota_ICMS, produto, frete;
    scanf ( "%lf %lf %lf %lf", &dolar, &aliquota_ICMS, &produto, &frete );
    
    calc(dolar, aliquota_ICMS, produto, frete);
    return 0;
}

