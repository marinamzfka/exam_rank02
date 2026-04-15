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
	int word_end;
	int last_letter;
	int j;

	i = 0;
	while (str[i])
	{
		// Обрабатываем пробелы - печатаем их как есть
		if (is_space(str[i]))
		{
			write(1, &str[i], 1);
			i++;
			continue;
		}

		// Начало слова - найдём его конец
		word_end = i;
		while (str[word_end] && !is_space(str[word_end]))
			word_end++;
		word_end--;

		// Обработаем весь word
		j = i;
		while (j <= word_end)
		{
			if (j == word_end && is_alpha(str[j]))
			{
				// Последний символ и это БУКВА → капсим
				if (str[j] >= 'a' && str[j] <= 'z')
					str[j] -= 32;
			}
			else if (is_alpha(str[j]))
			{
				// Не последний и это БУКВА → строчная
				if (str[j] >= 'A' && str[j] <= 'Z')
					str[j] += 32;
			}
			write(1, &str[j], 1);
			j++;
		}

		i = word_end + 1;
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