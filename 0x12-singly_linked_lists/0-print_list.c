#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	const list_t *tmp;
	
	unassigned int;
	
	tmp=h;
	for(i=0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->int, tmp->str);
	}
	return (i);
}
