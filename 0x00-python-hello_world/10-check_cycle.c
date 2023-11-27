#include "lists.h"

/**
 * check_cycle - check from the linked
 *
 * Return: 1 if have cycle
 */
int check_cycle(listint_t *list)
{
    if (!list)
        return 0;

    listint_t *sl = list;
    listint_t *fa = list;

    for (; sl && fa && fa->next; sl = sl->next, fa = fa->next->next)
    {
        if (sl == fa)
            return 1;
    }

    return 0;
}
