#include <stdio.h>

void transporte(long int A, long int B, long int C)
{
	long int X, Y, Z, prod, area,conts, total, resto;
	scanf("%ld %ld %ld", &A, &B, &C);
	scanf("%ld %ld %ld", &X, &Y, &Z);
	if ( A == 0 || B == 0 || C == 0 )
	{
		printf("0\n");
		return;
	}
	area = X / A;
	prod = Y / B;
	conts = Z / C;
	total = conts * prod * area;
	printf("%ld\n", total);
	
}
void main() 
{
	long int a, b, c;
	transporte(a, b, c);
}