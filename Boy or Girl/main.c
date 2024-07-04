#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char word [100];
int i,j;
int count = 0;
int a = 0;

int main()
{
    scanf("%s",word);
    for (i=0 ; word[i]!='\0' ;i++)
    {
        for (j=i-1 ; j>=0 ;j--)
        {
            if (word[i]==word[j])
            {
                a=1;
                break;
            }
        }
        if (a==0)
        count++;
        a=0;


    }

    if (count%2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }


    return 0;
}
