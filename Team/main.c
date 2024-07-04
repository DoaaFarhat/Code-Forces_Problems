#include <stdio.h>
#include <stdlib.h>
unsigned int n;
unsigned int i;
unsigned int a1;
unsigned int a2;
unsigned int a3;
unsigned int count;



int main()
{
    scanf("%i",& n);
    if ((1 <= n)&&(1000 >= n))
    {
        for(i=0;i<n;i++)
        {
            scanf("%i%i%i",& a1,&a2,&a3);
            if(2<=a1+a2+a3)
            {
                count=count+1;
            }
        }
     printf("%i",count);
     }

    return 0;
}
