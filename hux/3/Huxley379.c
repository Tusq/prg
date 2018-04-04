#include <stdio.h>

void meta(double km, double cont, double aux)
{
	if ( cont == 7 )
	{
		if ( aux >= 5 )
		{
			printf("Desempenho otimo\n");
			return;
		}else if ( aux == 3 || aux == 4 )
		{
			printf("Desempenho razoavel\n");
			return;
		}else if ( aux < 3 )
		{
			printf("Desempenho ruim\n");
			return;
		}
	}
	scanf("%lf", &km);
	if ( km >= 8 )
	{
		aux += 1;
	}
	meta(km, cont + 1, aux);
}
void main()
{
	double km;
	meta(km, 0, 0);
}