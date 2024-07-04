#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long int m;
long long int n;
long long int a;
long long int x;
long long int y;
long long int total;
int main()
{
    scanf("%lld%lld%lld",&m,&n,&a);
    x= (m / a)+(m%a != 0);
    y= (n / a)+(n%a != 0);
    total=x * y;
    printf("%lld ",total);

    return 0;
}
