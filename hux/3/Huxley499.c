#include    <stdio.h>

void ordenar(int *x, int *y)
{
	int aux;
	aux = *y;
	*y = *x;
	*x = aux;
}

int gyro(int n1, int n2, int aux)
{
	if ( n1 > n2)
	{
		ordenar(&n1, &n2);
	}
	if ( n1 % 4 == 0 && 1000 % n1 == 0 )
	{
		aux += n1;
	}
	if ( n1 == n2 - 1)
	{
		printf("%d\n", aux);
		return 0;
	}
	
	gyro(n1 + 1, n2, aux);
}

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	
	gyro(num1, num2, 0);
	
	return 0;
}    /*----End of fuction main ----*/