#include <stdio.h>
#include <unistd.h>

int my_isneg (int n) ;

int main (){
my_isneg(-4);
my_isneg(10);
my_isneg(0);

}

int my_isneg (int n)
{
	printf((n<0) ? "N" : "P");
	write(1, (n<0) ? "N" : "P", 1);
}
