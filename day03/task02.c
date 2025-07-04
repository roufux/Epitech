#include <stdio.h>
void my_print_revalpha(void);


int main()
{
    my_print_revalpha();
}
/*
int my_print_revalpha(void)
{
    int i;
    i=122;
    do
    {
        printf("%c",i);
        i--;
    }
    while(i>=97);
    return 0;
}
*/
void my_print_revalpha(void)
{
	char c='z';
	while(c>='a')
		printf("%c",--c);
}
