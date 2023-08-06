/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:15:40 by adenord           #+#    #+#             */
/*   Updated: 2023/08/05 20:12:09 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list	*fct_string(t_list **lst, t_list *elem, char *arg)
{
	t_list	*new;

	if (arg)
		new = ft_lst_insert(*lst, &elem, ft_lstnew(ft_strdup(arg)));
	else
		new = ft_lst_insert(*lst, &elem, ft_lstnew(ft_strdup("(null)")));
	new->next = elem->next;
	free(elem->content);
	free(elem);
	return (new);
}
