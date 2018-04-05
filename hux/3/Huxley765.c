
#include	<stdlib.h>
#include    <stdio.h>
#include    <string.h>
#include    <math.h>

void soma(int total, int nums)
{
    int n;
    if( scanf("%d" &n) != EOF)
    {
        total = total + n;
        nums ++;
        soma(total, nums);
    }
    else
    {
        printf("%lf", (total/nums));
        return 0;
    }
}

int main()
{
    soma(0, 0);
//    int nums[], i;
//    i = 0;
//    if(scanf ( "%d", &nums[i] != EOF){
//        i++;
//            }else {
//
//            }
    return 0;
}				
