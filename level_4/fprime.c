/*
** ENGLISH: Display prime factors of a number separated by '*' (ascending order)
** RUSSIAN: Вывести простые множители числа в порядке возрастания, разделенные '*'
**
** Пример: 42 → 2*3*7, 225225 → 3*3*5*5*7*11*13
*/

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int n;
	int i;

	if (ac == 2)
	{
		n = atoi(av[1]);
		if (n == 1)
			printf("1");
		else
		{
			i = 2;
			while (n >= i)
			{
				if (n % i == 0)
				{
					printf("%d", i);
					if (n == i)
						break ;
					printf("*");
					n /= i;
					i = 2;
				}
				else
					i++;
			}
		}
	}
	printf("\n");
	return (0);
}