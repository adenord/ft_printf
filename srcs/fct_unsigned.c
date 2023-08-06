/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_unsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:31:17 by adenord           #+#    #+#             */
/*   Updated: 2023/08/05 19:33:47 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_itoun(unsigned int nbr)
{
	char	temp[11];
	int		i;

	i = 0;
	while (nbr > 0)
	{
		temp[i] = (nbr % 10) + 48;
		nbr /= 10;
		i++;
	}
	temp[i] ='\0';
	ft_strrev(temp);
	return (ft_strdup(temp));
}

t_list	*fct_unsigned(t_list **lst, t_list *elem, int arg)
{
	unsigned int ov;
	t_list	*new;

	if (arg < 0)
	{
		ov = (unsigned int)arg;
		new = ft_lst_insert(*lst, &elem, ft_lstnew(ft_itoun(ov)));
	}
	else
	{
		ov = arg;
		new = ft_lst_insert(*lst, &elem, ft_lstnew(ft_itoa(ov)));
	}
	new->next = elem->next;
	free(elem->content);
	free(elem);
	return (new);
}
