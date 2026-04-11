/*
** ENGLISH: Apply a function to each element of a linked list
** RUSSIAN: Применить функцию к каждому элементу связного списка
**
** void ft_list_foreach(t_list *begin_list, void (*f)(void *))
** - Проходит по списку и запускает функцию f для каждого data
**
** Пример: (*f)(list_ptr->data) для каждого элемента
*/

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

*/

#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *)) {
    t_list *curr = begin_list;
    while (curr) {
        (*f)(curr->data);
        curr = curr->next;
    }
}