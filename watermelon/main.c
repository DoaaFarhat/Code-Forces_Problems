#include <stdio.h>


unsigned int Weight=0;
unsigned int x=0;
unsigned int div=0;
int main()
{


    scanf( "%i",&Weight);
    if ((1<=Weight)&&(100>=Weight))
    {
        x=Weight-2;
        div=x%2;
        printf("div= %i\n",div);
        if ((0!=x)&&(0==div))
        {
          printf("YES");
        }
        else
        {
          printf("NO");
        }
    }



    return 0;
}
