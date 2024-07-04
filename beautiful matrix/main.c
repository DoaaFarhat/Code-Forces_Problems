#include <stdio.h>
#include <stdlib.h>
int Mat[6][6];
int i;
int j;
int ans;

int main()
{
    for(i=1 ; i<6 ;i++)
    {
        for(j=1 ; j<6 ;j++)
        {
           scanf("%i",&Mat[i][j]);
           if (Mat[i][j] == 1)
           {
            ans = abs(i-3) +  abs(j-3);
            printf("%i",ans);
           }
        }
    }

    return 0;
}
