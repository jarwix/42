# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/14 00:41:39 by lpadisha          #+#    #+#              #
#    Updated: 2020/05/22 05:44:07 by lpadisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_toupper.c ft_tolower.c ft_strdup.c ft_calloc.c ft_substr.c \
ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_strtrim.c ft_split.c

OBJECTS=ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
ft_memchr.o ft_memcmp.o ft_strlen.o ft_strlcpy.o ft_strlcat.o \
ft_strchr.o ft_strrchr.o ft_strnstr.o ft_strncmp.o ft_atoi.o \
ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
ft_toupper.o ft_tolower.o ft_strdup.o ft_calloc.o ft_substr.o \
ft_strjoin.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
ft_putnbr_fd.o ft_itoa.o ft_strmapi.o ft_strtrim.o ft_split.o

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.a
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

so: 	
	gcc -fPIC -Wall -Wextra -Werror -c $(SRCS) 
	gcc $(OBJECTS) -shared -o libft.so

clean:
	/bin/rm -f $(OBJECTS)

fclean:	clean
	/bin/rm -f $(NAME)
 
re: fclean all
