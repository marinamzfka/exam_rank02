/*

Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> 
$
$>

*/

#include <unistd.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
	int i;
	int first_word;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	first_word = 1;
	while (is_space(av[1][i]))
		i++;
	while (av[1][i])
	{
		if (!first_word)
			write(1, "   ", 3);
		while (av[1][i] && !is_space(av[1][i]))
		{
			write(1, &av[1][i], 1);
			i++;
		}
		first_word = 0;
		while (is_space(av[1][i]))
			i++;
	}
	write(1, "\n", 1);
	return (0);
}