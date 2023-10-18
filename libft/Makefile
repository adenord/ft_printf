# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 09:58:12 by adenord           #+#    #+#              #
#    Updated: 2023/10/17 12:04:48 by adenord          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS := ft_atoi.c ft_bzero.c ft_calloc.c \
ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_strchr.c ft_strdup.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_tolower.c ft_toupper.c \
ft_itoa.c ft_putchar_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c \
ft_putstr_fd.c ft_split.c ft_striteri.c \
ft_strjoin.c ft_strmapi.c ft_strtrim.c \
ft_substr.c \
ft_lstadd_back.c ft_lstadd_front.c \
ft_lstclear.c ft_lstdelone.c \
ft_lstiter.c ft_lstlast.c ft_lstmap.c \
ft_lstnew.c ft_lstsize.c ft_lst_insert.c \
ft_memccpy.c \
ft_strcat.c ft_strcmp.c \
ft_strcpy.c ft_strncat.c \
ft_strncpy.c ft_strstr.c \
get_next_line.c ft_putstr.c \
ft_putchar.c ft_putnbr.c \
ft_strrev.c


CC := gcc
CPPFLAGS := -I includes/
CFLAGS := -Wall -Wextra -Werror
ARFLAGS := rcs

OBJS := $(SRCS:.c=.o)
NAME_LIB = libft.a

all : $(NAME_LIB)

$(NAME_LIB) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME_LIB)

re : fclean all
