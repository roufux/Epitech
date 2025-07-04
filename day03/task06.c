#include <stdio.h>
int my_print_comb2 (void);
void printer(int i); 
void printer_comma(int i); 


main()
{
my_print_comb2();
return 0;
}


my_print_comb2(void)
{
int i,j;

for (i=0; i<=99; i++)
{
	for (j=0; j<=99; j++){
		printer(i);
		printer_comma(j);
	}
}
return 0;
}



void printer(int i) 
{
if (i<=9){
	printf("0%d ",i);
}
else
{
	printf("%d ",i);
}
}

void printer_comma(int i) 
{
if (i<=9){
	printf("0%d, ",i);
}
else
{
	printf("%d, ",i);
}
}
