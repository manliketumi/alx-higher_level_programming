#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * insert_node - function inserts a number into sorted singly list
 * @head: a double pointer that return an address of new node
 * @number: an integer
 * Return: NULL or new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = newNode(number);

	if (*head == NULL || (*head)->data >= new_node->data)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL && current->next->data < new_node->data)
		{
			current = current->next;
		}
	}

	return (NULL);

}
