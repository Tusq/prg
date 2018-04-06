#include <stdio.h>

void jogo(int dadosrei, int dadoshele, int c, int ch, int cr, int auxh, int auxr)
{


	if ( c == 5 )
	{
		if ( ch > cr )
		{
			printf("HELENA\n");
			return;
		}
		if ( cr > ch )
		{
			printf("REINALDO\n");
			return;
		}
		if ( ch == cr )
		{
			if ( auxh > auxr )
			{
				printf("HELENA\n");
				return;
			}else if ( auxr > auxh )
			{
				printf("REINALDO\n");
				return;
			}else
			{
				printf("EMPATE\n");
				return;	
			}
			
		}
	}
	scanf("%d %d", &dadosrei, &dadoshele);
	auxh += dadoshele;
	auxr += dadosrei;

	if ( dadoshele > dadosrei )
	{
		ch ++;
		jogo(dadosrei, dadoshele, c + 1, ch, cr, auxh, auxr);
	}else if ( dadosrei > dadoshele )
	{
		cr ++;
		jogo(dadosrei, dadoshele, c + 1, ch, cr, auxh, auxr);
	}else if ( dadoshele == dadosrei )
	{
		ch ++;
		cr ++;
		jogo(dadosrei, dadoshele, c + 1, ch, cr, auxh, auxr);
	}
}
void main() 
{
	int d1, d2;
	jogo(d1, d2, 0, 0, 0, 0, 0);
}