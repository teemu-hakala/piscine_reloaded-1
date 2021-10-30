# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thakala <thakala@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 05:55:36 by thakala           #+#    #+#              #
#    Updated: 2021/10/30 11:41:57 by thakala          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = srcs

SRCS = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strcmp.c \
	$(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_swap.c

HEADER_DIR = includes/

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

COMP_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(COMP_FLAGS) -c $(SRCS) -I$(HEADER_DIR)
	ar rcs libft.a $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
