/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:19:47 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 11:49:10 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************* */
/*                           */
/*  convert letter to upper  */
/*                           */
/* ************************* */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return ((c - 97) + 65);
	else
		return (c);
}