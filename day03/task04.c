#include <stdio.h>

int my_isneg (int n) ;

int main (){
my_isneg(-4);
my_isneg(10);
my_isneg(0);

}

int my_isneg (int n)
{
	if (n<0)
	{
	printf("N");
	}
	else
	{
	printf("P");
	}
}
