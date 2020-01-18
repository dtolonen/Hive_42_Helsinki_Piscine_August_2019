/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtolonen <dtolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 19:16:44 by dtolonen          #+#    #+#             */
/*   Updated: 2019/08/27 19:26:06 by dtolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ex00/ft_list.h"


/*
Creates a new element of t_list type. 

"These links, basically structures...""

Need to use malloc, where do I need this...
In the video notes, they use eg. tmp = malloc(sizeof(t_list));
So, elem = malloc(sizeof(t_list));

*/

t_list	*ft_create_elem(void *data)
{
	/* It's up there in the function, so just 'elem'? */
	t_list	elem;
	elem =  malloc(sizeof(t_list));
/* It should assign data to the given argument and next to NULL.
 */
	elem->data = *data 
	/* to given argument, so is that ^ up there in void *data? */ 
	elem->next  = NULL 
	/* to NULL */
	return (elem);
}
