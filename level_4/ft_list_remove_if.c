/*
** ENGLISH: Remove elements from list where cmp(data_ref, element->data) == 0
** RUSSIAN: Удалить элементы из списка, где cmp(data_ref, elem) == 0
**
** Уничтожить выделенные data тех элементов, которые повторяют data_ref
**
** НО: не удаляют сами узлы, только data внутри них
*/

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>

*/

#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)()) {
    t_list *curr = (*begin_list);
    while (curr) {
        if (cmp(data_ref, curr->data))
            free(curr->data);
        curr = curr->next;
    }
}