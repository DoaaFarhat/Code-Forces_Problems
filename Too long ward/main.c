#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n ;
int i;
char word [100][110];
int length;
int main()
{
    scanf("%i",& n);
    if ((1 <= n)&&(100 >= n))
    {
     for(i = 0;i < n; i++)
     {

        scanf("%s",word[i] );
        length =strlen(word[i]);
        if(10<length)
        {
            printf("%c%d%c\n", word[i][0],length-2,word[i][length-1]);

        }
        else
        {
            printf("%s\n", word[i]);
        }

      }

     }


    return 0;
}



