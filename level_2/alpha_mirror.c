/*

Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------
 
Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.
 
'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'
 
and so on.
 
Case is not changed.
 
If the number of arguments is not 1, display only a newline.
 
Examples:
 
$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>

*/

#include <unistd.h>

char	mirror_char(char c)
{
    if (c >= 'a' && c <= 'z')
        return ('z' - (c - 'a'));
    if (c >= 'A' && c <= 'Z')
        return ('Z' - (c - 'A'));
    return (c);
}

int main(int ac, char **av)
{
    int		i;
    char	c;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            c = mirror_char(av[1][i]);
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}