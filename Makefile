# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrault <abrault@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/06 08:50:56 by abrault           #+#    #+#              #
#    Updated: 2013/12/06 13:19:07 by abrault          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

SRC = main.c

FLAG = -Wall -Wextra -Werror

Xlib_1 = -I/usr/X11R6/include

Xlib_2 = -L/usr/X11R6/lib -lX11

LIB = -L libft/ -lft

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(Xlib_1) -c main.c
	gcc $(FLAG) $(Xlib_2) $(LIB) -o $(NAME) main.o

clean:
	rm -f main.o

fclean:
	rm -f $(NAME)

re: clean fclean $(NAME)

