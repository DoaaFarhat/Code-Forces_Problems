#include <stdio.h>
#include <stdlib.h>
int n ;
int X = 0 ;
int i ;
char str[4] ;

int main()
{
    scanf("%i",&n);

       for(i=0 ; i<n ; i++)
       {
           scanf("%s",str);
           if ((str[1] == '+')||(str[4] == '+'))
           {
               X++;
           }
           else
           {
               X--;
           }

       }
       printf("%i",X);

    return 0;
}
