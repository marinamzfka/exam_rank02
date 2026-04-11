/*

Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>

*/

/*
** ENGLISH: Display multiplication table for a given number (1*n to 9*n)
** RUSSIAN: Вывести таблицу умножения для числа (от 1*n до 9*n)
*/

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *s)
{
	int res;

	res = 0;
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - '0');
		s++;
	}
	return (res);
}

void	put_nbr(int n)
{
	char c;

	if (n >= 10)
		put_nbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int i;
	int n;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		i = 0;
		while (++i <= 9)
		{
			put_nbr(i);
			write(1, " x ", 3);
			put_nbr(n);
			write(1, " = ", 3);
			put_nbr(i * n);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}