# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 15:44:41 by ytaya             #+#    #+#              #
#    Updated: 2021/11/20 22:10:37 by ytaya            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
AR = ar
NAME = libftprintf.a
flags = -Wall -Wextra -Werror
SRCS = ft_adress.c ft_len.c ft_len_int.c ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putstr.c ft_strlen.c ft_putnbr.c

OBJSRC = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJSRC)

%.o : %.c
	$(CC) $(flags) -c $< -o $@
	$(AR) rc $(NAME) $@

clean:
	rm -rf $(OBJSRC)

fclean: clean
	rm -rf $(NAME)

re: fclean all