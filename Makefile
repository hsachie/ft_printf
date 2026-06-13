# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsachie <hsachie@student.42.jp>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/23 17:31:44 by hsachie           #+#    #+#              #
#    Updated: 2026/06/13 17:23:54 by hsachie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libftprintf.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
RM          = rm -f
AR          = ar rcs

SRCS        = ft_printf.c ft_utils1.c ft_utils2.c

OBJS        = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re