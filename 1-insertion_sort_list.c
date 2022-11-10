#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list
 * according to Insertion sort algorithm.
 * @list: The doubly linked list.
 * 
 * Return: Nothing.
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *aux, *tmp, *prev;
    if (!list)
    return;
    aux = *list;
    tmp = aux->next;
    while (tmp)
    {
        aux = tmp;
        tmp = tmp->next;
        prev = aux->prev;
        while (prev && (aux->n < prev->n))
        {
            if (prev->prev)
                prev->prev->next = aux;
                aux->prev = prev->prev;
                prev->next = prev;
                prev->prev = aux;
            if (!aux->prev)
                *list =aux;
                prev = aux->prev;
            print_list(*list);
        }
    }
}