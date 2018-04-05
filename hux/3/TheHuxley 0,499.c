#include <stdio.h>

void ordenar(int *x, int *y)
{
	int aux;
	aux = *y;
	*y = *x;
	*x = aux;
}
int multi(int x, int y, int auxiliar)
{
	if ( x > y)
	{
		ordenar(&x, &y);
	}
	if ( x % 4 == 0 && 1000 % x == 0 )
	{
		auxiliar += x;
	}
	if ( x == y - 1)
	{
		printf("%d\n", auxiliar);
		return 0;
	}
	multi(x + 1, y, auxiliar);
}
void main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	multi(x, y, 0);
}