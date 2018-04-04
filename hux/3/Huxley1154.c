#include <stdio.h>

void vitoria(int ataque, int ataque1, int ataque2)
{
	int vencer = 0;
	if ( ataque > 10 || ataque1 > 10 || ataque2 > 10 )
	{
		vencer += 1;
	}
	if( ataque % 2 == 0 || ataque1 % 2 == 0 || ataque2 % 2 == 0 )
	{
		vencer += 1;
	}
	if( ataque == 0 || ataque1 == 0 || ataque2 == 0 )
	{
		printf("N�o\n");
		return;
	}
	if ( vencer == 2 )
	{
		printf("Sim\n");
		return;
	}
	printf("N�o\n");
	return;
}
void main()
{
	int ataque, ataque1, ataque2;
	scanf("%d %d %d", &ataque, &ataque1, &ataque2);
	vitoria(ataque, ataque1, ataque2);
}