#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str [1000];

int main()
{
    scanf("%s",str);
    if((str[0]>=97)&&(str[0]<=122))
    {
        str[0]=str[0]-32;
    }
    printf("%s",str);
    return 0;
}
