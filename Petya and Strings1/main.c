#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str1[100];
char str2[100];
int i;
int c;

int main()
{
    scanf("%s \n %s",str1,str2);


    for (i=0 ; str1[i] != '\0' ; i++)
    {
        if ((str1[i]>=65) &&(str1[i]<=90))
        {
            str1[i] = str1[i]+32;
        }
        if ((str2[i]>=65) &&(str2[i]<=90))
        {
            str2[i] = str2[i]+32;
        }

    }
    c= strcmp(str1,str2);
    printf("%i",c);


    return 0;
}
