# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 12:24:03 by ylamsiah          #+#    #+#              #
#    Updated: 2022/11/22 12:24:03 by ylamsiah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC = cc

RM = rm -rf

AR = ar rc

CFLAGS	= -Wall -Wextra -Werror

SRCS = ft_printf.c \
   	ft_putchar.c \
	ft_putstr.c \
       ft_putnbr.c \
	ft_upointer.c \
       ft_putlowhex.c \
       ft_putupphex.c \
	ft_uputnbr.c

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re