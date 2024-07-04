#include <stdio.h>
#include <stdlib.h>
int M;
int N;
int max_num;
const char x=1 ;
const char y=2 ;


int main()
{
    scanf( "%i %i", &M , &N );
    max_num = (M*N)/2;
    printf("%i",max_num);

    return 0;
}
