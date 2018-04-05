
#include	<stdlib.h>
#include    <stdio.h>
#include    <string.h>
#include    <math.h>

int main()
{
    double x, y, z;
    scanf ( "%lf\n%lf\n%lf", &x, &y, &z );

    double media = (double) (x + y + z)/ 3;
    printf("%.2e\n", media);

    return 0;
}				
