
/* in video notes, 
begins with #ifndef __list_h__ 
and
#define __list_h__
and
ends with #endif. */

#ifndef __ft_list_h__
#define __ft_list_h__

/* the next parts are from the exercise 'must include these' */
typedef struct s_list
{
struct s_list *next;
void *data;
} t_list;

/* also this prototype, 'from exercise 01 onwards'  */
t_list *ft_create_elem(void *data);

#endif
