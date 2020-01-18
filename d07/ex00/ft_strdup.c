/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <dmitry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 10:46:45 by dtolonen          #+#    #+#             */
/*   Updated: 2020/01/18 15:52:36 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PROTOTYPE, THIS LINE INTO MAIN.C: */ 

char *ft_strdup(char *src);

/* FT_STRDUP.C FILE: */ 

#include <string.h>
#include <stdlib.h>

/* 	CONTINUE FROM HERE... */
char *ft_strdup(char *src)
{
	int	length;
	
	length = 0;
	while (str[length]) != '\0')
		length++	
}




/* 

Exercise PDF - 'reproduce the behaviour of the function strdup'
PDF - This is how it should be prototyped: char *ft_strdup(char *src);
So, we need a string s1 - is this given in this file or main.c?
look up char *src (PDF) and const char *name(man page)
look up strdup - below
you need to call this file in main.c


PDF - allowed functions: malloc (needs stdlib.h)
Usage:
It's a void *
malloc(size_t size);



Man page 


SYNOPSIS
#include <stdlib.h>

The malloc() function allocates size bytes of memory and returns a
pointer to the allocated memory. 

RETURN VALUES
If successful, calloc(), malloc(), realloc(), reallocf(), and valloc()
functions return a pointer to allocated memory.  If there is an error,
they return a NULL pointer and set errno to ENOMEM.

Allowed functions - Man page:

strdup(const char *s1);

SYNOPSIS
#include <string.h>

The strdup() function allocates sufficient memory for a copy of the
     string s1, does the copy, and returns a pointer to it.  The pointer may
     subsequently be used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to
     ENOMEM.

     The strndup() function copies at most n characters from the string s1
     always NUL terminating the copied string. */



