#include	<stdlib.h>
#include    <stdio.h>
#include    <string.h>
#include    <math.h>

int main()
{
    char type1[6];
    char type2[6];

    scanf ( "%s %s", &type1, &type2 );

    if(type1[0] == 'A' && type2[0] == 'A')
    {
        printf("Empate\n");
        return 0;
    }
    else if(type1[0] == 'F' && type2[0] == 'F')
    {
        printf("Empate\n");
        return 0;
    }
    else if(type1[0] == 'P' && type2[0] == 'P')
    {
        printf("Empate\n");
        return 0;
    }
    else if(type1[0] == 'F' && type2[0] == 'P')
    {
        printf("Vantagem\n");
        return 0;
    }
    else if(type1[0] == 'P' && type2[0] == 'A')
    {
        printf("Vantagem\n");
        return 0;
    }
    else if(type1[0] == 'A' && type2[0] == 'F')
    {
        printf("Vantagem\n");
        return 0;
    }
    else if(type1[0] == 'P' && type2[0] == 'F')
    {
        printf("Desvantagem\n");
        return 0;
    }
    else if(type1[0] == 'F' && type2[0] == 'A')
    {
        printf("Desvantagem\n");
        return 0;
    }
    else if(type1[0] == 'A' && type2[0] == 'P')
    {
        printf("Desvantagem\n");
        return 0;
    }

    

    return 0;
}				
