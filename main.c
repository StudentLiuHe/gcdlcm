#include <stdio.h>
#include "include/gcdlcm.h"

int main()
{
   int a,b;
   a=12;
   b=18;
   printf("gcd=%d\nlcm=%d",gcd(a,b),lcm(a,b));
    return 0;
}
