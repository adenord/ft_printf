# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/29 17:32:43 by adenord           #+#    #+#              #
#    Updated: 2023/08/06 16:45:57 by adenord          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =./srcs/nbr_args.c ./srcs/ft_printf.c ./srcs/fct_hexa.c \
./srcs/fct_address.c ./srcs/fct_unsigned.c ./srcs/cutting.c \
./srcs/replace_and_add.c ./srcs/fct_integer.c ./srcs/fct_string.c \
./srcs/fct_character.c ./srcs/ft_lst_strlen.c ./srcs/display_list.c

SRCS1 =./srcs/part1/ft_atoi.c ./srcs/part1/ft_bzero.c ./srcs/part1/ft_calloc.c \
./srcs/part1/ft_isalnum.c ./srcs/part1/ft_isalpha.c ./srcs/part1/ft_isascii.c \
./srcs/part1/ft_isdigit.c ./srcs/part1/ft_isprint.c ./srcs/part1/ft_memchr.c \
./srcs/part1/ft_memcmp.c ./srcs/part1/ft_memcpy.c ./srcs/part1/ft_memmove.c \
./srcs/part1/ft_memset.c ./srcs/part1/ft_strchr.c ./srcs/part1/ft_strdup.c \
./srcs/part1/ft_strlcat.c ./srcs/part1/ft_strlcpy.c ./srcs/part1/ft_strlen.c \
./srcs/part1/ft_strncmp.c ./srcs/part1/ft_strnstr.c ./srcs/part1/ft_strrchr.c \
./srcs/part1/ft_tolower.c ./srcs/part1/ft_toupper.c


SRCS2 = ./srcs/part2/ft_itoa.c ./srcs/part2/ft_putchar_fd.c \
./srcs/part2/ft_putendl_fd.c ./srcs/part2/ft_putnbr_fd.c \
./srcs/part2/ft_putstr_fd.c ./srcs/part2/ft_split.c ./srcs/part2/ft_striteri.c \
./srcs/part2/ft_strjoin.c ./srcs/part2/ft_strmapi.c ./srcs/part2/ft_strtrim.c \
./srcs/part2/ft_substr.c


SRCS_BONUS = ./srcs/bonus/ft_lstadd_back.c ./srcs/bonus/ft_lstadd_front.c \
./srcs/bonus/ft_lstclear.c ./srcs/bonus/ft_lstdelone.c \
./srcs/bonus/ft_lstiter.c ./srcs/bonus/ft_lstlast.c ./srcs/bonus/ft_lstmap.c \
./srcs/bonus/ft_lstnew.c ./srcs/bonus/ft_lstsize.c ./srcs/bonus/ft_lst_insert.c


SRCS_ADDITIONAL = ./srcs/additional_fct/ft_memccpy.c \
./srcs/additional_fct/ft_strcat.c ./srcs/additional_fct/ft_strcmp.c \
./srcs/additional_fct/ft_strcpy.c ./srcs/additional_fct/ft_strncat.c \
./srcs/additional_fct/ft_strncpy.c ./srcs/additional_fct/ft_strstr.c \
./srcs/additional_fct/get_next_line.c ./srcs/additional_fct/ft_putstr.c \
./srcs/additional_fct/ft_putchar.c ./srcs/additional_fct/ft_putnbr.c \
./srcs/additional_fct/ft_strrev.c


SRCS1_PATH = $(patsubst ./srcs/part1/%, ./libft/srcs/part1/%, $(SRCS1))
SRCS2_PATH = $(patsubst ./srcs/part2/%, ./libft/srcs/part2/%, $(SRCS2))
SRCS_BONUS_PATH = $(patsubst ./srcs/bonus/%, ./libft/srcs/bonus/%, $(SRCS_BONUS))
SRCS_ADDITIONAL_PATH = $(patsubst ./srcs/additional_fct/%, ./libft/srcs/additional_fct/%, $(SRCS_ADDITIONAL))

LIB_OBJS = $(SRCS1_PATH:.c=.o) $(SRCS2_PATH:.c=.o) $(SRCS_BONUS_PATH:.c=.o) $(SRCS_ADDITIONAL_PATH:.c=.o)

OBJS = $(SRCS:.c=.o)

NAME_LIB = libftprintf.a

GCC = gcc -Wall -Wextra -Werror -I includes/

all : $(NAME_LIB)

.c.o : 
	$(GCC) -c $< -o $(<:.c=.o)

$(NAME_LIB) : libft $(OBJS)
	make -C libft/
	ar rcs $@ $(OBJS) $(LIB_OBJS)

clean :
	make -C libft/ clean
	rm -rf $(OBJS)

fclean : clean
	make -C libft/ clean
	rm -rf libftprintf.a

re : fclean all
