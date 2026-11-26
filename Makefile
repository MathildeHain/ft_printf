# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mathain <mathain@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/26 11:46:35 by mathain           #+#    #+#              #
#    Updated: 2026/11/26 11:59:44 by mathain          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libftprintf.a
CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
AR			:= ar rcs
RM			:= rm -f

SRC_FILES	:=
OBJ_FILES	:= $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_FILES): ft_printf.h

clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re