#include <stdio.h>

void ganha_brinquedo(double nota, double maior, int cont, int aux)
{
	if ( cont == 6 )
	{
		if ( aux == 6 )
		{
			printf("Ganha brinquedo\n");
			return;
		}else
		{
			printf("Sem brinquedo\n");
			return;
		}
	}
	scanf("%lf", &nota);
	if(nota > maior)
	{
		maior = nota;
		aux ++;
	}
	ganha_brinquedo(nota, maior, cont + 1, aux);
}
void main()
{
	double nota;
	ganha_brinquedo(nota, 0, 0, 0);
}