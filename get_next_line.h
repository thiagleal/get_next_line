/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 00:58:55 by tsiqueir          #+#    #+#             */
/*   Updated: 2025/04/08 18:00:22 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 200
# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

void	ft_bzero(void *s, size_t n);
int		ft_strlengnl(char *str);
ssize_t	ft_readgnl(int fd, char *buffer, int *erro);
void	ft_clearbuffergnl(char *buffer);
char	*ft_strjoingnl(char *str, char *buffer);
char	*get_next_line(int fd);

#endif
