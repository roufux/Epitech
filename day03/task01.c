#include <stdio.h>
void my_print_alpha();


void main()
{
    my_print_alpha();
}

void my_print_alpha()
{
    int i;
    i=97;
    char a='a';
    a++;
    printf("%c\n",a);
    printf("%d\n",a);
    printf("boucle:\n");
    do
    {
        printf("%c",i);
        i++;
    }
    while(i<=122);
}


/* CHar stocke en ascii*/
