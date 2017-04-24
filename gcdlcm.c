#include "include/gcdlcm.h"
int gcd(int a,int b)
{
    int i,min;
    min =a>b?b:a;
    for (i=min;i>=1;i--)
    {
        if (a%i==0&&b%i==0)
            break;

    }
    return (i);

}
int lcm(int a,int b)
{
    int i,max;
    max=a>b?a:b;
    for (i=max;;i++)
    {
      if (i%a==0&&i%b==0)
        break;
    }
    return (i);

}
