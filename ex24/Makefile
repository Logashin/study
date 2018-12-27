# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmann <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 14:19:39 by tmann             #+#    #+#              #
#    Updated: 2018/11/22 15:34:05 by tmann            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILE = srcs/*.c

INCLUDES = includes

all: $(NAME)

$(NAME):
	gcc -I $(INCLUDES) -c $(FILE)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
