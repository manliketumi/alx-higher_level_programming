#include "list.h"
/**
 * is_palindrome - function that checks if singly linked list is a palindrome
 * @head: double pointer of the parameter
 *
 * Return: 0 if not a palindrome or 1 on success
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *heqad, *fast = *head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	slow = reverseList(slow);
	fast = *head;

	while (slow != NULL)
	{
		if (slow->data != fast->data)
		{
			return (0); /* not a palindrome */
		}
		slow = slow->next;
		fast = fast->next;
	}

	return (1); /* is a palindrome */
}
