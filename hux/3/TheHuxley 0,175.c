#include <stdio.h>

void main()
{
	int total, estrada, pedagio, custoporkm, custopedagio;
	scanf("%d %d %d %d", &estrada, &pedagio, &custoporkm, &custopedagio);
	total = (estrada*custoporkm) + (estrada/pedagio) * custopedagio;
	printf("%d\n", total);
}