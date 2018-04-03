#include <stdio.h>

int main() 
{
	char pkmn[10];
	scanf("%s", pkmn);

	if(pkmn[6] == 'b') 
    {
		printf("Bulbassauro\n");
	} 
    else if(pkmn[6] == 's') 
    {
		printf("Squirtle\n");
	} 
    else if(pkmn[6] == 'c') 
    {
		printf("Charmander\n");
	} 
    else 
    {
		printf("Codigo Invalido\n");
	}

	return 0;
}
