#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac != 4)
	{
		printf("\n");
		return (0);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	if (av[2][0] == '+')
		printf("%d\n", a + b);
	else if (av[2][0] == '-')
		printf("%d\n", a - b);
	else if (av[2][0] == '*')
		printf("%d\n", a * b);
	else if (av[2][0] == '/')
		printf("%d\n", a / b);
	return (0);
}
