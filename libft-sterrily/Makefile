# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sterrily <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/26 17:52:57 by sterrily          #+#    #+#              #
#    Updated: 2020/05/26 18:10:32 by cat              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDES = ./
HEADER  = libft.h
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c \
         ft_isascii.c ft_isdigit.c ft_toupper.c ft_isalpha.c ft_isalnum.c \
         ft_isprint.c ft_tolower.c ft_putnbr_fd.c ft_memcmp.c \
         ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
         ft_strnstr.c ft_strncmp.c ft_atoi.c ft_memmove.c ft_calloc.c \
         ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
         ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
         ft_strmapi.c
OBJ = $(SRC:.c=.o)
SRC_BONUS = ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
         ft_lstiter.c ft_lstsize.c ft_lstnew.c ft_lstlast.c ft_lstmap.c
OBJ_BONUS = $(SRC_BONUS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: $(OBJ) $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
	ranlib $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	/bin/rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

