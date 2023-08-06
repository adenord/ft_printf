/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:13:11 by adenord           #+#    #+#             */
/*   Updated: 2023/08/05 19:43:57 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*convert_hexa(int nbr, char *base)
{
	long	ov;
	char	ret[9];
	int		i;

	i = 0;
	if (nbr == 0)
		return (ft_strdup("0"));
	if (nbr < 0)
	{
		nbr = -nbr;
		ov = (4294967295 - nbr) + 1;
	}
	else
		ov = nbr;
	while (ov > 0)
	{
		ret[i] = base[ov % 16];
		ov /= 16;
		i++;
	}
	ret[i] = '\0';
	ft_strrev(ret);
	return (ft_strdup(ret));
}

t_list	*fct_hexa(t_list **lst, t_list *elem, int arg, char op)
{
	t_list	*new;

	if (op == 'X')
		new = ft_lst_insert(*lst, &elem, ft_lstnew(convert_hexa(arg, "0123456789ABCDEF")));
	else
		new = ft_lst_insert(*lst, &elem, ft_lstnew(convert_hexa(arg, "0123456789abcdef")));
	new->next = elem->next;
	free(elem->content);
	free(elem);
	return (new);
}
