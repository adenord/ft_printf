/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_string_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:15:40 by adenord           #+#    #+#             */
/*   Updated: 2023/08/15 10:14:08 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

t_list	*fct_string(t_list **lst, t_list *elem, char *arg)
{
	t_list	*new;
	t_list	*temp;
	char	*content;

	content = elem->content;
	if (!arg)
		temp = ft_lstnew(ft_strdup("(null)"));
	else if (ft_strlen(content) == 2)
		temp = ft_lstnew(ft_strdup(arg));
	else
		temp = ft_lstnew(gen_excp_str(content, ft_strdup(arg)));
	new = ft_lst_insert(*lst, &elem, temp);
	new->next = elem->next;
	free(elem->content);
	free(elem);
	return (new);
}
