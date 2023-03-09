# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oaliende <oaliende@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 18:54:08 by oaliende          #+#    #+#              #
#    Updated: 2023/03/09 20:59:41 by oaliende         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -g3 #-Wall -Wextra -Werror 

SRC_PATH = src/

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
ft_tolower.c ft_toupper.c ft_substr.c ft_striteri.c

#HEADER_DIR = include/

#HEADER := libft.h
#HEADER := $(addprefix $(HEADER_DIR),$(HEADER))

#SRCS_BONUS = ft_lstadd_front.c \
ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c ft_lstlast.c \
ft_lstnew.c ft_lstsize.c ft_lstiter.c ft_lstmap.c

SRCS	:= $(addprefix $(SRC_PATH), $(SRC))
OBJ		:= $(SRC:.c=.o)
OBJS	:= $(addprefix $(OBJ_PATH), $(OBJ))
INCS	:= -I ./includes/

all: $(OBJ_PATH) $(NAME)
#bonus: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	
$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@$(CC) -c $(CFLAGS) -o $@ $^

#@$(CC) -c $(CFLAGS) -I $(HEADER_DIR) $< -o $@

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean