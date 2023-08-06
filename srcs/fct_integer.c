/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_integer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:05:38 by adenord           #+#    #+#             */
/*   Updated: 2023/08/05 19:32:16 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list	*fct_integer(t_list **lst, t_list *elem, int arg)
{
	t_list	*new;

	new = ft_lst_insert(*lst, &elem, ft_lstnew(ft_itoa(arg)));
	new->next = elem->next;
	free(elem->content);
	free(elem);
	return (new);
}
