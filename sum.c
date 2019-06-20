#include "stdio.h"
#include "sum.h"

int result;

int summarize( int a, int b)
{
    result = a+b;
}

int main( void )
{
    result = summarize( 5, 4, 6 );
}
