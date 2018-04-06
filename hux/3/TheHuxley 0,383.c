#include <stdio.h>

void main()
{
    double a, b, c;
    scanf ( "%lf %lf %lf", &a, &b, &c );

    double mediac = (a + b + c)/ 3;
    printf("%.2e\n", mediac);
}			