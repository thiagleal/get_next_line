/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 00:58:14 by tsiqueir          #+#    #+#             */
/*   Updated: 2025/04/08 18:00:34 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*str;
	int			errocode;
	static char	buffer[BUFFER_SIZE + 1];

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	str = NULL;
	errocode = 0;
	while (buffer[0] || ft_readgnl(fd, buffer, &errocode) > 0)
	{
		if (errocode == 1)
			return (NULL);
		str = ft_strjoingnl(str, buffer);
		if (!str)
			return (NULL);
		ft_clearbuffergnl(buffer);
		if (str[ft_strlengnl(str) - 1] == '\n')
			return (str);
	}
	if (errocode == 1)
		return (free(str), NULL);
	return (str);
}
