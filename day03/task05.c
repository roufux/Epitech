#include <stdio.h>
int my_print_comb(void);
int verify_comb(int i, int j, int k);
void my_pierre_comb();


int main(){
	my_pierre_comb();




}

int my_print_comb(void)
{
	int i,j,k =-1;
	for (i=-1; i<=9; i++) {
		for (j=-1; j<=9 ; j++){
			for (k=-1; k<=9; k++){
				if (!verify_comb(i,j,k))
				{
					printf("%d%d%d ",i,j,k);
				}
			}

		}

	}
}

int verify_comb(int i, int j, int k){
	if (i==j)
	{
		return 1;
	}

	if(i==k)
	{
		return 1;
	}

	if(j==k)
	{
		return 1;
	}

	return 0;
}

void my_pierre_comb()
{
	int i=-1;
	//printf("%d",i);
	while (++i<10)
	{
		//printf("%d",i);
		int j=-1;
		while (++j<10)
		{
			int k=-1;
			while (++k<10)
			{
				if(i<j && j<k)
					printf("%d%d%d ",i,j,k);
			}
		}

	}	

}
