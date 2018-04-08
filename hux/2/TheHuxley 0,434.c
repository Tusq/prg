#include <stdio.h>

void main()
{
	int creditos, restantes, semestres_faltantes;
	scanf("%d", &creditos);
	restantes = 260 - creditos;
	semestres_faltantes = restantes/24;
	printf("%d\n", semestres_faltantes);
}