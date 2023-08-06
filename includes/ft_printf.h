/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:37:47 by adenord           #+#    #+#             */
/*   Updated: 2023/08/06 17:29:00 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "../libft/includes/libft.h"

int		ft_printf(const char *format, ...);
int		nbr_args(const char *format);
t_list	*fct_unsigned(t_list **lst, t_list *elem, int arg);
t_list	*fct_address(t_list **lst, t_list *elem, long adr);
t_list	*fct_hexa(t_list **lst, t_list *elem, int arg, char op);
t_list	*cutting(const char *format);
void	replace_and_add(t_list **lst, va_list args);
t_list	*fct_integer(t_list **lst, t_list *elem, int arg);
t_list	*fct_string(t_list **lst, t_list *elem, char *arg);
t_list	*fct_character(t_list **lst, t_list *elem, int arg);
int		ft_lst_strlen(t_list *lst);
void	display_list(t_list *lst);

#endif
