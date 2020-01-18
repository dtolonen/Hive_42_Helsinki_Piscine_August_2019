#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtolonen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/26 18:13:37 by dtolonen          #+#    #+#              #
#    Updated: 2019/08/26 18:49:45 by dtolonen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/strlen.c srcs/swap.c

all:
   gcc -c $(SRC) -I includes/
   ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o strlen.o swap.o

clean:
   rm -f ft_putchar.o ft_putstr.o ft_strcmp.o strlen.o swap.o

fclean:    clean
   rm -f $(NAME)

re: fclean all
