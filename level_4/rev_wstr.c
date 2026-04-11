/*
** ENGLISH: Print words of a string in reverse order (last word first)
** RUSSIAN: Отпечатать слова строки в обратном порядке (последнее слово первым)
**
** Пример: "You hate people" → "people hate You"
*/

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>

*/

#include <unistd.h>

int main(int ac, char **av) {
    if (ac == 2) {
        if (!*av[1]) return write(1, "\n", 1);
        int i = -1;
        while (av[1][++i]);
        while( i >= 0) {
            while (!av[1][i] || av[1][i] == ' ' || av[1][i] == '\t')
                i--;
            int end = i;
            while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
                i--;
            int start = i+1;
            int flag = start;
            while (start <= end) {
                write(1, &av[1][start], 1);
                start++;
            }
            if (flag != 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}