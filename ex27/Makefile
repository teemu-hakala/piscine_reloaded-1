# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thakala <thakala@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 09:39:30 by thakala           #+#    #+#              #
#    Updated: 2021/10/30 11:43:45 by thakala          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC_DIR = srcs

HEADER_DIR = includes/

SRCS = $(SRC_DIR)/ft_display_file.c $(SRC_DIR)/ft_error.c \
	$(SRC_DIR)/ft_open_file.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/main.c

OBJS = ft_display_file.o ft_error.o ft_open_file.o ft_strlen.o main.o

COMP_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(COMP_FLAGS) -c $(SRCS) -I$(HEADER_DIR)
	gcc $(COMP_FLAGS) $(OBJS) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
