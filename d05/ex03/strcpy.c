/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtolonen <dtolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:40:23 by dtolonen          #+#    #+#             */
/*   Updated: 2019/09/04 17:45:54 by dtolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	while(s2 [i])
	{
		s1[i] =  s2[i];
		i++;
	}
	s1[i] = s[i];
	return (s1);
}

int	main(void)
{
	char str1 [] = "Hello";
	char str2 [] = "There";
	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	return (0);
}
