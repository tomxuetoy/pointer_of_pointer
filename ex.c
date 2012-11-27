#include <stdio.h>

int main( void )
{
    int i = 1, *p, *p2;
    p = &i;
    p2 = &p;
    printf( "%x\n", p );
    printf( "%x\n", &p );
    printf( "%x\n", &p2 );
}
