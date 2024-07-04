#include <stdio.h>
#include <stdlib.h>
int n ;
int k ;
int i ;
int sum=0 ;
int a[1000] ;

int main()
{
    scanf("%i  %i",&n,&k);
    for(i=0; i<n ; i++)
    {
        scanf("%i",&a[i]);
    }
    for(i=0; i<n ; i++)
    {
        if( (a[i]>=a[k-1]) && (a[i]>0) )
        {
            sum++;
        }
    }
    printf("%i",sum);
    return 0;
}
