/*

Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);

** ENGLISH: Split a string into words (delimited by spaces/tabs/newlines)
** RUSSIAN: Нарезать строку на слова ПО равным образом "a b c" → {"a", "b", "c", NULL}
**
** С алокацией памяти через malloc
*/

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	**ft_split(char *str)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	split = (char **)malloc(sizeof(char *) * (ft_strlen(str) + 1));
	while (str[i] != '\0')
	{
		while (str[i] != ' ')
		{
			split[j][k] = str[i];
			i++;
			k++;
		}
		split[j][k] = '\0';
		j++;
		if (str[i] == ' ')
			i++;
	}
	split[j] = NULL;
	return (split);
}