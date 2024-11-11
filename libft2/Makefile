# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 14:34:54 by aammisse          #+#    #+#              #
#    Updated: 2024/11/11 17:34:03 by aammisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror

SRCS =     ft_isdigit.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c ft_substr.c \
        ft_atoi.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c \
        ft_bzero.c ft_itoa.c ft_memset.c ft_strdup.c ft_strncmp.c ft_calloc.c \
        ft_putchar_fd.c ft_striteri.c ft_strnstr.c ft_isalnum.c ft_putendl_fd.c \
        ft_strjoin.c ft_strrchr.c ft_isalpha.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c \
        ft_strtrim.c ft_isascii.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c

BSRCS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
        ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
        ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)
    
all: $(NAME)

$(NAME): $(OBJS)
    
bonus: $(BOBJS)

%.o: %.c libft.h
	${CC} ${CFLAGS} -c $< -o $@
	ar rc $(NAME) $@

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all