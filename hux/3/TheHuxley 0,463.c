#include <stdio.h>

void vacinacao(int idade, int qtdsarampo, int qtdhepatite, int duasvacinas)
{
	scanf("%d", &idade);
	if( idade == 100 )
	{
		printf("%d\n", qtdsarampo);
		printf("%d\n", qtdhepatite);
		printf("%d\n", duasvacinas);
		return;
	}
	if ( idade >= 3 && idade <= 6 )
	{
		qtdsarampo += 1;
	}
	if( idade >= 5 && idade <= 8 )
	{
		qtdhepatite += 1;
	}
	if ( idade == 5 || idade == 6 )
	{
		duasvacinas += 1;
	}
	vacinacao(idade, qtdsarampo, qtdhepatite, duasvacinas);
}
void main() 
{
	int n;
	vacinacao(n, 0, 0, 0);
}