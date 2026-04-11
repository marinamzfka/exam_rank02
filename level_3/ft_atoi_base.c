/*

Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);

*/

#define BASE "0123456789abcdef"

int	char_to_val(char c)
{
    int i;

    i = 0;
    while (BASE[i])
    {
        if (BASE[i] == c || BASE[i] - 32 == c)
            return (i);
        i++;
    }
    return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int res;
    int sign;
    int val;

    if (!str || str_base < 2 || str_base > 16)
        return (0);
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    sign = 1;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
        str++;
    res = 0;
    val = char_to_val(*str);
    while (val >= 0 && val < str_base)
    {
        res = res * str_base + val;
        str++;
        val = char_to_val(*str);
    }
    return (res * sign);
}