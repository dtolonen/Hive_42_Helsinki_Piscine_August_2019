/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d06e01wip.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtolonen <dtolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 17:18:10 by dtolonen          #+#    #+#             */
/*   Updated: 2019/08/21 17:18:12 by dtolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
{
	write(1, &c, 1);
}
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argv[0][i] != '\0' && argc)
	{
		ft_putchar(argv[0][i]);
		++i;
	}
	ft_putchar('\n');
	return (0);
}
