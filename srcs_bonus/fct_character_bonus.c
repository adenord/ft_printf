/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_character_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:37:03 by adenord           #+#    #+#             */
/*   Updated: 2023/08/17 10:51:54 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

t_list	*fct_character(t_list **lst, t_list *elem, int arg)
{
	t_list	*new;
	t_list	*temp2;
	char	*content;
	char	tempc[2];

	content = elem->content;
	tempc[0] = (char)arg;
	tempc[1] = '\0';
	temp2 = ft_lstnew(ft_strdup(tempc));
	if (ft_strlen(content) != 2)
		new = gen_excp_chr(temp2, lst, elem, arg);
	else
	{
		new = ft_lst_insert(*lst, &elem, ft_lstnew(temp2));
		if (arg == 0)
			new->len = 1;
		new->next = elem->next;
	}
	free(elem->content);
	free(elem);
	return (new);
}