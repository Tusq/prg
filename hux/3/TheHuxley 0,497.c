#include <stdio.h>

void emissora(double audiencia, double media, double maior, int cont, int maiorc)
{
	scanf("%lf", &audiencia);
	media += audiencia;
	if ( audiencia > maior )
	{
		maior = audiencia;
		maiorc = cont;
	}
	if ( cont == 5 )
	{
		printf("%.2lf\n", media/5);
		if ( maiorc == 1 || maiorc == 4 )
		{
			printf("NOVELA\n");
		}else if ( maiorc == 2 || maiorc == 5)
		{
			printf("FILME\n");
		}else if ( maiorc == 3 )
		{
			printf("FUTEBOL\n");
		}
		return;
	}
	emissora(audiencia, media, maior, cont + 1, maiorc);
}
void main()
{
	double a;
	emissora(a, 0, 0, 1, 0);	
}