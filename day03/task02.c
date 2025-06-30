#include <stdio.h>
int my_print_revalpha(void);


int main()
{
    my_print_revalpha();
}

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
