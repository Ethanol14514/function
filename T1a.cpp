#include <stdio.h>
int d=1;
int f(int p)
{   static int d=5;
    d+=p;
    printf("%d",d);
    return (d);
}
void T1a( )
{   int a=3;
    printf("%d",f(a+f(d)));
    printf("\n");
}