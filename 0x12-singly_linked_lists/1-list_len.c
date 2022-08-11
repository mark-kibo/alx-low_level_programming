#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	const list_t *tmp;

	unassigned int i;
	
	tmp = h;
	for(i=0; tmp; i++)
	{
		tmp = tmp->next;
	}
	return (i);
}
