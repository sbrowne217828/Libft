# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: labrown <labrown@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 15:17:47 by labrown           #+#    #+#              #
#    Updated: 2017/10/28 19:47:50 by labrown          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FTS = ft_isalnum \
	  ft_isascii \
	  ft_isdigit \
	  ft_isprint \
	  ft_putchar \
	  ft_putchar_fd \
	  ft_putnbr \
	  ft_putstr \
	  ft_putstr_fd \
	  ft_strcpy \
	  ft_strlen \
	  ft_tolower \
	  ft_toupper \
	  ft_memset \
	  ft_strdup \
	  ft_bzero \
	  ft_memcpy \
	  ft_memccpy \
	  ft_isalpha \
	  ft_iswhitespace \
	  ft_atoi \
	  ft_absval \
	  ft_memchr \
	  ft_endofnum \
	  ft_memcmp \
	  ft_memchr \
	  *ft_memmove \
	  *ft_strncpy \
	  *ft_strcat \
	  ft_strncat \
	  ft_putnbr_fd \
	  ft_putendl \
	  ft_putendl_fd \
	  *ft_strlcat \
	  *ft_strchr \
	  ft_strrchr \
	  ft_strcmp \
	  ft_strncmp \
	  ft_strstr \
	  ft_strnstr \
	  ft_memalloc \
	  ft_memdel \
	  ft_strnew \
	  ft_strdel \
	  ft_strclr \
	  ft_striter \
	  ft_striteri \
	  *ft_strmap \
	  *ft_strmapi \
	  ft_strequ \
	  ft_strnequ \
	  ft_strsub \
	  ft_strjoin \
	  ft_strtrim \
	  ft_strsplit \
	  ft_wordcount \
	  ft_lstnew \
	  ft_lstdelone \
	  ft_lstdel \
	  ft_lstadd \
	  ft_lstiter \
	  ft_lstmap \
	  ft_isupper \
	  ft_ft \
	  ft_itoa \
	  ft_digits \
	  ft_itoa \
	  ft_wordsize_w \
	  ft_memdup 

SRCS = $(addsuffix .c, $(FTS))
OBJS = $(addsuffix .o, $(FTS))

CC = gcc
CFLAGS = -Wall -Werror -Wextra

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I ./ && \
	ar rcs $(NAME) $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
