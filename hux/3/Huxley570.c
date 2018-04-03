#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    
    printf("%d %d %d\n", (num /100), (num % 100 / 10), ((num % 100 ) % 10));
    return 0;
}