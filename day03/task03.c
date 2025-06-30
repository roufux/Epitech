#include <stdio.h>
int my_print_digits(void);

int main()
{
	my_print_digits();
}

int my_print_digits(void)
{
	int i=0;
do 
{
	printf("%d",i);
	i++;
} while(i<=9);
}
