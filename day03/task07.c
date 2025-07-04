#include <stdio.h>
int my_put_nbr ( int nb ) ;

main()
{
int d=0;
int a=-32767;
int b=32767;
int c=-2147483647;
my_put_nbr(a);
my_put_nbr(b);
my_put_nbr(c);
my_put_nbr(d);
}

my_put_nbr ( int nb ) 
{
	printf("%d ",nb);
}

// Le refaire sans printf
