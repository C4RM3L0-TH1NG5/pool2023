#include <unistd.h>

void ft_ft(int *nbr){

	*nbr = 42;

}

int main (){

	int n = 15;

	printf("%d \n", n);

	ft_ft(&n);

	printf("%d \n", n);

}
