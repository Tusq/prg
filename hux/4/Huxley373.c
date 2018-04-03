#include <stdio.h>

int main()
{
	int prussia , bavaria, saxonia, renania;
	scanf("%d %d %d %d", &prussia, &bavaria, &saxonia, &renania);

    
    if(prussia * saxonia == renania * bavaria)
    {
		printf("S");
	}
	else if(prussia * bavaria == saxonia * renania) 
    {
		printf("S");
	}
    else if(prussia * renania == bavaria * saxonia)
    {
		printf("S");
	}
    else {
		printf("N");
	}

	return 0;
}   
