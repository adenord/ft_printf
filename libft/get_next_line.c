/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:14:22 by adenord           #+#    #+#             */
/*   Updated: 2023/07/28 11:29:59 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_realloc(char *src, char c)
{
	char	*ret;
	size_t	size;

	size = ft_strlen(src);
	ret = (char *)ft_calloc((size + 2), sizeof(char));
	ft_strlcpy(ret, src, size + 1);
	ret[size] = c;
	free(src);
	return (ret);
}

char	*get_next_line(int fd)
{
	char	*line;
	char	buf[1];
	ssize_t	bytes_read;

	bytes_read = 0;
	line = (char *)ft_calloc(2, sizeof(char));
	if (!line)
		return (NULL);
	while (buf[0] != '\n')
	{
		bytes_read = read(fd, buf, 1);
		if ((bytes_read == -1) || (buf[0] == 0 && ft_strlen(line) == 0))
		{
			free(line);
			return (NULL);
		}
		if ((bytes_read == 0 && ft_strlen(line) > 0) || buf[0] == 0)
			return (line);
		line = ft_realloc(line, buf[0]);
	}
	return (line);
}
