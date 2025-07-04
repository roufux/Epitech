#include <stdio.h>
#include <stdlib.h>
int my_print_combn (int n);
int is_ok_rec (int n);


int main()
{
//	int a = is_ok_rec(12456);
//	int b = is_ok_rec(12467);
//	int c = is_ok_rec(12476);
//	printf("%d %d %d",a,b,c);
	my_print_combn(3);
	my_print_combn(5);
	return(0);
}

int my_print_combn (int n)
{
	int j=0;
	int p=1;

	while(j<n)
	{
		p = 10 * p;
		j++;
	}

	int i=p/10;

	while(i<p)
	{
		if(is_ok_rec(i))
		{
			printf("%d ",i);
			i++;
		}
		else
		{
			i++;
		}
	}
}

int is_ok_rec (int n)
{
	int r=n;
	while(r>=10)
	{
		int m;
		int c;
		int l;
		m = r%10;
		l = r/10;
		c = l%10;
		if(m<=c)
		{
			return(0);
		}
		r=l;
	}
	return(1);
}
