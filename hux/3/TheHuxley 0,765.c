#include <stdio.h>

void produto(int total, int num)
{
    int n;
    if( scanf("%d", &n) != EOF)
    {
        total = total + n;
        num ++;
        produto(total, num);
    }
    else
    {
        printf("Media = %.1lf\n", (total * 1.0/num));
        return;
    }
}

void main()
{
    produto(0, 0);
}       