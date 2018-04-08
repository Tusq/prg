#include <stdio.h>

void CRE(int matricula, int guardarm, double cre, double menorcre, double mediacre, double cont)
{
	scanf("%d\n %lf\n", &matricula, &cre);
	if ( matricula == 999 )
	{
		printf("%d\n%.2lf\n", guardarm, mediacre/cont);
		return;
	}
	if ( cre < menorcre )
	{
		menorcre = cre;
		guardarm = matricula;
		//printf("%d\n", guardarm);
	}
	mediacre += cre;

	CRE(matricula, guardarm, cre, menorcre, mediacre, cont + 1);
}
void main() 
{
	int m;
	double cre;
	CRE(m, 0, cre, 10000000000, 0, 0);
}