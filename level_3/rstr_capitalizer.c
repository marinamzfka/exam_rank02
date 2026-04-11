/*

Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts 
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

A letter is a character in the set [a-zA-Z]

If there are no parameters, display \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>

*/

#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

void	process_string(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		// Если текущий символ - это буква
		if (is_alpha(str[i]))
		{
			// Ищем вперёд: есть ли ещё буквы в этом слове после current?
			j = i + 1;
			while (str[j] && !is_space(str[j]))
			{
				if (is_alpha(str[j]))  // Нашли букву впереди
					break;
				j++;
			}
			
			// Если не нашли букву впереди (j указывает на пробел или конец)
			// Значит текущая буква ПОСЛЕДНЯЯ в слове → капсим её
			if (str[j] == '\0' || is_space(str[j]))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;  // a->A, b->B и т.д.
			}
			// Есть ещё буквы впереди → текущая не последняя → строчная
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;  // A->a, B->b и т.д.
			}
		}
		// Если не буква и не пробел → сделать строчным (на случай цифр, пунктуации)
		else if (!is_space(str[i]))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		
		// Выводим символ
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			process_string(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}