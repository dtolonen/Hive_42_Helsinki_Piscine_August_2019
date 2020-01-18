/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtolonen <dtolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:08:45 by dtolonen          #+#    #+#             */
/*   Updated: 2019/09/04 19:29:23 by dtolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_rep(char *str)
{
	int i;
	int j;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] + 'a';
			while (j >= 0)
			{
				write(1, &str[i], 1);
				j--;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 'A';
			while (j >= 0)
			{
				write(1, &str[i], 1);
				j--;
		}
	}
		else
			write(1, &str[i], 1);
			i++;
	}
	write(1, "\n", 1);
}





int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argc == 2)
		ft_rep(argv[1]);
		return (0);
}