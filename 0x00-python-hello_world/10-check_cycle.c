#include "lists.h"
/**
 * check_cycle - function checks if singly linked list has a cycle innit
 * @list: parameter of singly linked list
 *
 * Return: 0 if there is no cycle or 1 otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *check;

	if (list == NULL || list->next == NULL)
		return (0);
	current = list;
	check = current->next;

	while (current != NULL && check->next != NULL
		&& check->next->next != NULL)
	{
		if (current == check)
			return (1);
		current = current->next;
		check = check->next->next;
	}
	return (0);
}
