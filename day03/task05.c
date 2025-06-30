#include <stdio.h>
int my_print_comb(void);
int verify_comb(int i, int j, int k);
	

int main(){
my_print_comb();




}

int my_print_comb(void)
{
int i,j,k =0;
for (i=0; i<=9; i++) {
	for (j=0; j<=9 ; j++){
		for (k=0; k<=9; k++){
			if (verify_comb(i,j,k)==1)
			{
				
			}
			else 
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
