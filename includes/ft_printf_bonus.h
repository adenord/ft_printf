/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:37:47 by adenord           #+#    #+#             */
/*   Updated: 2023/08/18 21:55:07 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

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
char	*ft_itoun(unsigned int nbr);
char	*gen_excp(char *format, char *str);
char	*gen_excp_str(char *format, char *str);
char	*min_width(char *format, char *str);
void	left_aligned(char *str, size_t len);
char	*precision(char *format, char *str);
char	*zeroed(char *format, char *str);
char	*formater(int len, int zeros, char *minus, char *str);
char	*precision_str(char *format, char *str);
char	*gen_excp_adr(char *format, char *str);
t_list	*gen_excp_chr(t_list *temp2, t_list **lst, t_list *elem, int arg);
char	*hex_header(char *format, char *str);
char	*plus_header(char *str, int len);

#endif
