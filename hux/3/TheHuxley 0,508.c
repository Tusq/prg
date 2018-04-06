#include <stdio.h>

void correcao(int tempo, int cont, int media, int minutos)
{
	if (cont == 5)
	{
		printf("%d\n%d\n%d\n%d\n", media/5, ((media/5)*100)/3600, (((media/5)*100)%3600)/60, (((media/5)*100)%3600)%60);
		return;
	}
	scanf("%d", &tempo);
	media += tempo;
	correcao(tempo, cont + 1, media, minutos);
}

void main()
{
	int t;
	correcao(t, 0, 0, 0);
}