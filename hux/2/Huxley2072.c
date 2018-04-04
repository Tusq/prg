#include    <stdio.h>
#include    <math.h>

int D4C(char direction, int local)
{
    //printf( " char = %c\n", direction);
    if(direction == 'D')
    {
        return (local - 1);
    }
    else
    {
        return (local + 1);
    }
}

int  muralha(int moves, char track, int coins, int local )
{
    if(moves == 0)
    {
        printf( "%d", coins );
        return 0;
    }
    
    char dire;
    scanf ( "\n%c", &dire );

    if(local == 1)
    {
        track = 'X';
    }
    else if(local == -1)
    {
        track = 'Y';
    }

    local = D4C(dire, local); 
    //printf("local = %d\n", local);

    if(local == -1)
    {
        if(track == 'X')
        {
            muralha(moves - 1, track, coins + 1, local);
        }
        else
        {
            muralha(moves - 1, track, coins, local);
        }
    }
    else if(local == 1)
    {
        if(track == 'Y')
        {
            muralha(moves - 1, track, coins + 1, local);
        }
        else
        {
            muralha(moves - 1, track, coins, local);
        }
    }
    else
    {
            muralha(moves - 1, track, coins, local);
    }
}

int main()
{
    int num;
    scanf ( "%d", &num );
    muralha(num, 'a', 0, 0);

    
    return 0;
}	/* ----------  end of function main  ---------- */
