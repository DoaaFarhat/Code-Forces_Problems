#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str1[100];
int i,j;
int length;

int main()
{
    scanf("%s",str1);
    length = strlen(str1);
    for ( i=0; i<length-1 ;i++)
    {
        for (j=0; j<length-i-1 ;j++)
        {
            if (str1[j]!='+')
            {
                if(str1[j]>str1[j+2])
                {
                    char temp = str1[j];
                    str1[j]=str1[j+2];
                    str1[j+2] =temp;
                }
            }
        }
    }


    printf("%s",str1);
    return 0;
}

