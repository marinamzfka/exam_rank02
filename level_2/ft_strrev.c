/*

Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);

*/

char	*ft_strrev(char *str)
{
    int		left;
    int		right;
    char	tmp;

    right = 0;
    while (str[right])
        right++;
    right--;
    left = 0;
    while (left < right)
    {
        tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }
    return (str);
}
