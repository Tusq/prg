#include <stdio.h>

int main()
{
	int xpage, ypage, xfoto[2], yfoto[2];
	scanf("%d %d %d %d %d %d", &ypage, &xpage, &yfoto[0], &xfoto[0], &yfoto[1], &xfoto[1]);
	
	if((xpage * ypage) >= ((xfoto[0]*yfoto[0]) + (xfoto[1]*yfoto[1])))
    {    
        printf("S\n");	
    }   
    else
    {
        printf("N\n");
    }
	return 0;
} 
