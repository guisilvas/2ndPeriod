#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x=7, y=5;

    printf("The sum between %d + %d = %d\n",x,y,(x+y));
    printf("The sub between %d - %d = %d\n",x,y,(x-y));
    printf("The mult between %d x %d = %d\n",x,y,(x*y));
    printf("The division between %d / %d = %.2lf\n",x,y,(x/y));
    printf("The remainder between %d / %d = %d\n",x,y,(x%y));
    printf("The quotient between %d / %d = %d\n",x,y,(x/y));

    return 0;
}