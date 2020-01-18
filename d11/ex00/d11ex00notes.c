NOTEPAD 


----------
EXAMPLES 

#include <stdlib.h>
#include "../../includes/ft_list.h"


t_list	*ft_create_elem(void *data)

{
	t_list *element;

	if (!(element = malloc(sizeof(t_list))))
		return (NULL);
	element->data = data;
	element->next = NULL;
	return (element);
}


OR:

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	elem = (t_list*)malloc(sizeof(t_list));
	if (elem)
	{
		elem->next = 0;
		elem->data = data;
	}
	return (elem);
}



————————

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list

{
	void			*data;
	struct s_list	*next;
}				t_list;

#endif



------

Allowed functions : malloc

Create the function ft_create_elem which creates a new element of t_list type.

• It should assign data to the given argument and next to NULL.
• Here’s how it should be prototyped :
t_list *ft_create_elem(void *data);
 

/* ft_list.h: */

In ft_list.h, must include this struct and 
elem prototype (ex01 onwards), see instructions:

typedef struct s_list
{
struct s_list *next;
void *data;
} t_list;


t_list *ft_create_elem(void *data);


/* ft_create_elem.c: */

Create the function ft_create_elem which creates a new element of t_list type. 
It should assign data to the given argument and next to NULL.


t_list *ft_create_elem(void *data);