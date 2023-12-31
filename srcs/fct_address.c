/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_address.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:35:40 by adenord           #+#    #+#             */
/*   Updated: 2023/08/05 16:44:05 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*convert_address(unsigned long adr)
{
	char	base[17];
	char	ret[21];
	int		i;

	i = 0;
	ft_strcpy(base, "0123456789abcdef");
	if (adr == 0)
		return (ft_strdup("0x0"));
	while (adr > 0)
	{
		ret[i] = base[adr % 16];
		adr /= 16;
		i++;
	}
	ret[i] = 'x';
	i++;
	ret[i] = '0';
	i++;
	ret[i] = '\0';
	ft_strrev(ret);
	return (ft_strdup(ret));
}

t_list	*fct_address(t_list **lst, t_list *elem, long adr)
{
	t_list	*new;

	new = ft_lst_insert(*lst, &elem, ft_lstnew(convert_address(adr)));
	new->next = elem->next;
	free(elem->content);
	free(elem);
	return (new);
}
