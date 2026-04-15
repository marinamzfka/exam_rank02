/*

Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);

** ENGLISH: Convert an int to a null-terminated string, allocate memory with malloc
** RUSSIAN: Преобразовать целое число в строку, выделить память malloc
**
** char *ft_itoa(int nbr) - возвращает указатель на строку
**
** Пример: 42 → "42", -17 → "-17", 0 → "0"
*/

#include <stdlib.h>

int	count_digits(long int n)
{
	int count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int	len;
	long int	n;

	n = nbr;
	len = count_digits(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}