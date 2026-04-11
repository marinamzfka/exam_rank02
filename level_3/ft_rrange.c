/*

Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.

*/

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*res;
	int	len;
	int	i;
	int	dir;

	if (start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	if (end > start)
		dir = -1;
	else
		dir = 1;
	res = (int *)malloc(sizeof(int) * len);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = end;
		end += dir;
		i++;
	}
	return (res);
}