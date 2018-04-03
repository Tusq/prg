#include <stdio.h>

long double germania long double prussia, long double austria) 
{
	return ( austria + prussia ) * (( austria - prussia + 1 ) / 2 );
}

int main() 
{
	long double number1, number2;
	scanf("%Lf %Lf", &number1, &number2);
	printf("%.0Lf", germania(number1, number2));

	return 0;
}
