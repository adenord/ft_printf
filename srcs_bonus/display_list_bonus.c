/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:39:11 by adenord           #+#    #+#             */
/*   Updated: 2023/08/11 18:41:56 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	display_list(t_list *lst)
{
	size_t	i;
	char	*str;

	while (lst)
	{
		i = 0;
		str = (char *)lst->content;
		while (i < lst->len)
		{
			ft_putchar(str[i]);
			i++;
		}
		lst = lst->next;
	}
}
