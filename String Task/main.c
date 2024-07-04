#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i,j,c,d,len;
char str[100];
char str1[200];
int main()
{
    scanf("%s",str);
    len = strlen(str);

    for( i=0,j=0 ; i<len; i++)
    {
      c = ( (str[i]!= 'a') && (str[i]!= 'e') && (str[i]!= 'u') && (str[i]!= 'o') && (str[i]!= 'i') && (str[i]!= 'y'));
      d = ( (str[i]!= 'A') && (str[i]!= 'E') && (str[i]!= 'U') && (str[i]!= 'O') && (str[i]!= 'I') && (str[i]!= 'Y'));
      if ((c==1)&&(d==1))
      {
          str1[j]='.';
          j++;
          if(str[i]>=65 && str[i]<=90)
          {
              str1[j]=str[i]+32;
              j++;
          }
          else
          {
              str1[j]=str[i];
              j++;
          }
      }
    }
    str1[j]='\0';
    printf("%s",str1);
    return 0;
}
