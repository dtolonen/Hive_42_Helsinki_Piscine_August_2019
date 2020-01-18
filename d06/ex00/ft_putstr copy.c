/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtolonen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:22:35 by dtolonen          #+#    #+#             */
/*   Updated: 2019/08/21 20:21:26 by dtolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
int		index;
	
		index = 0;
		while(str[index] != '0')
		{
			ft_putchar(str[index]);
			index = index + 1:
		}
}
