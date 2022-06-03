# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asahin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 10:05:51 by asahin            #+#    #+#              #
#    Updated: 2022/02/01 20:05:37 by asahin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= ft_atoi.c \
			  ft_bzero.c \
			  ft_isalpha.c \
			  ft_isdigit.c \
			  ft_isalnum.c \
			  ft_isascii.c \
			  ft_isprint.c \
			  ft_toupper.c \
			  ft_tolower.c \
			  ft_strncmp.c \
			  ft_memcmp.c \
			  ft_strlen.c \
			  ft_strlcpy.c \
			  ft_strlcat.c \
			  ft_strchr.c \
			  ft_strrchr.c \
			  ft_strnstr.c \
			  ft_memset.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_memchr.c \
			  ft_strdup.c \
			  ft_calloc.c \
			  ft_substr.c \
			  ft_strjoin.c \
			  ft_strtrim.c \
			  ft_split.c \
			  ft_itoa.c \
			  ft_strmapi.c \
			  ft_striteri.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c 

BNSS		= ft_lstnew.c \
			  ft_lstadd_front.c \
			  ft_lstsize.c \
			  ft_lstlast.c \
			  ft_lstadd_back.c \
			  ft_lstdelone.c \
			  ft_lstclear.c \
			  ft_lstiter.c \
			  ft_lstmap.c

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

OBJS		= $(SRCS:.c=.o)

BNSS_OBJS	= $(BNSS:.c=.o)

all: $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BNSS_OBJS) $(OBJS)
	ar rcs $(NAME) $(BNSS_OBJS) $(OBJS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
