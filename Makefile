# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/14 00:41:39 by lpadisha          #+#    #+#              #
#    Updated: 2020/06/12 06:00:55 by lpadisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean re so bonus

NAME=libft.a

SRCS=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_toupper.c ft_tolower.c ft_strdup.c ft_calloc.c ft_substr.c \
ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_strtrim.c ft_split.c

SRCS_bonus=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c #ft_lstmap.c

OBJECTS=$(SRCS:.c=.o)

OBJECTS_bonus=$(SRCS_bonus:.c=.o)

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

so: 	
	gcc -fPIC -Wall -Wextra -Werror -c $(SRCS) 
	gcc $(OBJECTS) -shared -o libft.so

bonus:
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS_bonus)
	ar rc $(NAME) $(OBJECTS_bonus)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)
	/bin/rm -f $(OBJECTS_bonus)

fclean:	clean
	/bin/rm -f $(NAME)
 
re: fclean all
