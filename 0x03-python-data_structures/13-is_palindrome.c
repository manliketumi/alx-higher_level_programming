#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * add_nodeint - add new node at the beginning of list
 * @head: double pointer ton the parameter
 * @n: integer that add to the list
 *
 * Return: NULL or the address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *new;

        new = malloc(sizeof(listint_t));

        if (new == NULL)
                return (NULL);
        new->n = n;
        new->next = *head;
        *head = new;
        return (new);
}
/**
 * is_palindrome - function that checks if singly linked list is a palindrome
 * @head: double pointer of the parameter
 *
 * Return: 0 if not a palindrome or 1 on success
 */
int is_palindrome(listint_t **head)
{
	listint_t *head2 = *head;
	listint_t *toe = NULL, *toe2 = NULL;

	if (*head == NULL || head2->next == NULL)
	{
		return (1);
	}

	while (head2 != NULL)
	{
		add_nodeint(&toe, head2->n);
		head2 = head2->next;
	}
	toe2 = toe;

	while (head2 != NULL)
	{
		if ((*head)->n != toe2->n)
		{
			free_listint(toe);
			return (0);
		}
		*head = (*head)->next;
		toe2 = toe2->next;
	}
	free_listint(toe);

	return (1); /* is a palindrome */
}
