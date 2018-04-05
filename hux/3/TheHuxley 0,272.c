#include <stdio.h>

void prosimples(int n, int PROD)
{
    if(scanf("%d", &n) != EOF)
    {
    	PROD *= n;
    	prosimples(n, PROD);
    }else
    {
    	printf("Prod = %d", PROD);
    }
}
void main()
{
	int n;
	prosimples(n, 1);
}