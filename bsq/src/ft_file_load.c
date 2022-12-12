/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_load.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/05 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_bsq.h"

char	*ft_bufccopy(char *dest, char *src, int n)
{
	char *d;

	d = dest;
	while (n--)
		*d++ = *src++;
	return (dest);
}

char	*ft_fileread(int fd)
{
	char	buf[BUFFER];
	char	*content;
	char	*tmp;
	int		len;
	int		size;

	if(!(content = malloc(sizeof(char))))
		return (NULL);
	*content = '\0';
	size = 0;
	while ((len = read(fd, buf, BUFFER)) > 0)
	{
		if(!(tmp = malloc((size + len + 1) * sizeof(char))))
			break;
		tmp = ft_bufccopy(tmp, content, size);
		free(content);
		ft_bufccopy(tmp + size, buf, len);
		content = tmp;
		size += len;
		content[size] = '\0';
	}
	if (len)
		free(content);
	return ((len) ? NULL : content);
}

char *ft_file_load(char *path)
{
	char	*content;
	int		fd;

	fd = (path) ? open(path, O_RDONLY) : STDIN_FILENO;
	if (fd < 0)
		return (NULL);
	content = ft_fileread(fd);
	if (fd != STDIN_FILENO)
		close(fd);
	return (content);
}
