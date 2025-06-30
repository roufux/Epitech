#include <stdio.h>
int my_print_alpha(void);


int main()
{
    my_print_alpha();
}

int my_print_alpha(void)
{
    int i;
    i=97;
    do
    {
        printf("%c",i);
        i++;
    }
    while(i<=122);
    return 0;
}
