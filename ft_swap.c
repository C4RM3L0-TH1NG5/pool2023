#include <unistd.h>

#include <stdio.h>


void ft_swap(int *a, int *b)

	{

		int c;

		c = *b;

		*b = *a;

		*a = c;

	}

main ()

	{

	int		n, n1;

	n = 42;

	n1 = 21;

	printf("before\n %d %d\n", n, n1);

	ft_swap(&n, &n1);

	printf("after\n %d %d\n", n, n1);

	}
    