#include "lists.h"

/**
 * check_cycle - check of linked
 * @list: pointer
 * Return: 1 have a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *ptr1 = NULL;
	listint_t *ptr2 = NULL;

	if (list == NULL)
		return (0);
	ptr1 = list;
	ptr2 = list;

	while (ptr1 && ptr2 && ptr2->next)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;

		if (ptr1 == ptr2)
			return (1);
	}
	return (0);
}
