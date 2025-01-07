# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/07 10:47:59 by bfiochi-          #+#    #+#              #
#    Updated: 2025/01/07 21:24:55 by bfiochi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c\
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
		ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c\
		ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c\
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c\
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c\
		ft_toupper.c

SRCSBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
	    	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		ft_lstmap.c

SRCSPRINTF = ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_putpt.c\
		ft_format.c ft_printf.c

OBJS = $(SRCS:.c=.o)

OBJSBONUS = $(SRCSBONUS:.c=.o)

OBJSPRINTF = $(SRCSPRINTF:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(OBJSBONUS) $(OBJSPRINTF)
	ar rc $(NAME) $(OBJS) $(OBJSBONUS) $(OBJSPRINTF)

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJS) $(OBJSBONUS) $(OBJSPRINTF)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

