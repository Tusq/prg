#include	<stdlib.h>
#include    <stdio.h>
#include    <string.h>
#include    <math.h>

int pkmn(int ndex)
{
    if(ndex == 1)
    {
        printf("Bulbasaur\n");  
        return 0;
    }
    else if(ndex == 2)
    {
        printf("Ivysaur\n");  
        return 0;
    }
    else if(ndex == 3)
    {
        printf("Venusaur\n");  
        return 0;
    }
    else if(ndex == 4)
    {
        printf("Charmander\n");  
        return 0;
    }
    else if(ndex == 5)
    {
        printf("Charmeleon\n");  
        return 0;
    }
    else if(ndex == 6)
    {
        printf("Charizard\n");  
        return 0;
    }
    else if(ndex == 7)
    {
        printf("Squirtle\n");  
        return 0;
    }
    else if(ndex == 8)
    {
        printf("Wartortle\n");  
        return 0;
    }
    else if(ndex == 9)
    {
        printf("Blastoise\n");  
        return 0;
    }
    else if(ndex == 10)
    {
        printf("Caterpie\n");  
        return 0;
    }
    else if(ndex == 11)
    {
        printf("Metapod\n");  
        return 0;
    }
    else if(ndex == 12)
    {
        printf("Butterfree\n");  
        return 0;
    }
    else
    {
        printf("Pok�mon inv�lido no momento\n");
        return 0;
    }
}

int main()
{
    int dex;
    scanf ( "%d", &dex );
    pkmn(dex);

    return 0;
}				
