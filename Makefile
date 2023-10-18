# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/29 17:32:43 by adenord           #+#    #+#              #
#    Updated: 2023/10/17 12:41:20 by adenord          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =./srcs/nbr_args.c ./srcs/ft_printf.c ./srcs/fct_hexa.c \
./srcs/fct_address.c ./srcs/fct_unsigned.c ./srcs/cutting.c \
./srcs/replace_and_add.c ./srcs/fct_integer.c ./srcs/fct_string.c \
./srcs/fct_character.c ./srcs/ft_lst_strlen.c ./srcs/display_list.c

SRCS_BONUS =./srcs_bonus/nbr_args_bonus.c ./srcs_bonus/ft_printf_bonus.c \
./srcs_bonus/fct_hexa_bonus.c ./srcs_bonus/fct_address_bonus.c \
./srcs_bonus/fct_unsigned_bonus.c ./srcs_bonus/cutting_bonus.c \
./srcs_bonus/replace_and_add_bonus.c ./srcs_bonus/fct_integer_bonus.c \
./srcs_bonus/fct_string_bonus.c ./srcs_bonus/fct_character_bonus.c \
./srcs_bonus/ft_lst_strlen_bonus.c ./srcs_bonus/display_list_bonus.c \
./srcs_bonus/exception_handler_bonus.c ./srcs_bonus/gen_excp_bonus.c \
./srcs_bonus/exception_handler_2_bonus.c

CC := gcc
CPPFLAGS := -I includes/
CFLAGS := -Wall -Wextra -Werror
ARFLAGS := rcs

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

NAME_LIB = libftprintf.a

all : $(NAME_LIB)

$(NAME_LIB) : $(OBJS)
	make -C libft/
	mv libft/libft.a .
	mv libft.a $(NAME_LIB)
	$(AR) $(ARFLAGS) $@ $^

bonus : $(OBJS_BONUS)
	make -C libft/
	mv libft/libft.a .
	mv libft.a $(NAME_LIB)
	ar rcs $(NAME_LIB) $(OBJS_BONUS) $(L_OBJS)

clean :
	make clean -C libft/
	$(RM) $(OBJS)
	$(RM) $(OBJS_BONUS)

fclean : clean
	$(RM) libftprintf.a

re : fclean all
