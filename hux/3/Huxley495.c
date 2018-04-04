#include <stdio.h>
#include <stdio.h>

void grampos( double alunos, double ngrampos, double cont)
{
	scanf("%lf", &alunos);
	ngrampos += alunos * 4;
	
	if ( cont == 7 )
	{
		printf("%.0lf\n", ngrampos);
		printf("%.0lf\n", ceil(ngrampos/30));
		return;
	}
	grampos(alunos, ngrampos, cont + 1);
}

void main()
{
	double alunos, ngrampos;
	grampos(alunos, ngrampos,  1);
}