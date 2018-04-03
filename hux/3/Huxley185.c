#include <stdio.h>
#include <math.h>

int main() 
{
	int L, A, P, R;
	scanf("%d %d %d %d", &L, &A, &P, &R);
	if(R*2 >= sqrt((L*L)+(A*A)+(P*P)) && R*2 >= sqrt((L*L)+(A*A)))
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    
    return 0;
}
