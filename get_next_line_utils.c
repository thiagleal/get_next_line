/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 00:58:42 by tsiqueir          #+#    #+#             */
/*   Updated: 2025/04/08 18:00:28 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = 0;
}

int	ft_strlengnl(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

ssize_t	ft_readgnl(int fd, char *buffer, int *erro)
{
	ssize_t	bytes_read;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read < 0)
	{
		*erro = 1;
		ft_bzero(buffer, BUFFER_SIZE + 1);
		return (bytes_read);
	}
	return (bytes_read);
}

void	ft_clearbuffergnl(char *buffer)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlengnl(buffer);
	if (!buffer)
		return ;
	while (j < BUFFER_SIZE)
		buffer[i++] = buffer[j++];
	ft_bzero(&buffer[i], BUFFER_SIZE - i);
}

char	*ft_strjoingnl(char *str, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*ret;

	i = 0;
	j = 0;
	ret = (char *)malloc(ft_strlengnl(str) + ft_strlengnl(buffer) + 1);
	if (!ret)
		return (free(str), NULL);
	while (str && str[i])
	{
		ret[i] = str[i];
		i++;
	}
	free(str);
	while (buffer && buffer[j] && buffer[j] != '\n')
	{
		ret[i + j] = buffer[j];
		j++;
	}
	if (buffer && buffer[j] == '\n')
		ret[i + j++] = '\n';
	ret[i + j] = '\0';
	return (ret);
}
