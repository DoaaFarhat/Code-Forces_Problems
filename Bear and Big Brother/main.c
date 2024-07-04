#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a,b;
int n=0;

int main()
{
    scanf("%i %i",&a,&b);
    while (1)
    {
        n++;
        a=3*a;
        b=2*b;
        if (a>b)
        {
            printf("%i",n);
            break;
        }

    }


    return 0;
}
