/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/05 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_bsq.h"
#include <limits.h>

int	ft_atoui(char *str, int *length)
{
	long	res;
	int		i;

	res = 0;
	*length = 0;
	while (str[*length] >= '0' && str[*length] <= '9')
		(*length)++;
	i = 0;
	while (str[*length + i] && str[*length + i] != '\n')
		i++;
	if (i > 3)
		return (0);
	*length -= 3 - i;
	i = 0;
	while (i < *length)
	{
		res = res * 10 + str[i++] - '0';
		if (res > INT_MAX)
		{
			res = 0;
			break;
		}
	}
	return ((res > 16000) ? 0 : res);
}

int	ft_check_line(t_map *m)
{
	char	*s;
	t_point	p;

	s = m->matrix;
	p.x = -1;
	while (s[++p.x] != '\n')
		if (!s[p.x] || s[p.x] == m->plein || (s[p.x] != m->vide && s[p.x] != m->obstacle))
			return (0);
	m->size.x = p.x;
	p.y = 1;
	while (m->size.x == p.x++ && *(s += p.x))
	{
		p.x = -1;
		while (s[++p.x] != '\n')
			if (!s[p.x] || s[p.x] == m->plein || (s[p.x] != m->vide && s[p.x] != m->obstacle))
				return (0);
		p.y++;
	}
	return (p.y == m->size.y);
}

int	ft_is_valid(t_map *m)
{
	int	i;

	if ((m->size.y = ft_atoui(m->content, &i)) <= 0)
		return (0);
	if (m->content[i] != '\0' && m->content[i] != '\n')
		m->vide = m->content[i++];
	else
		return (0);
	if (m->content[i] != '\0' && m->content[i] != '\n')
		m->obstacle = m->content[i++];
	else
		return (0);
	if (m->content[i] != '\0' && m->content[i] != '\n')
		m->plein = m->content[i++];
	else
		return (0);
	if (m->content[i] != '\n' || m->vide == m->plein || m->vide == m->obstacle || m->plein == m->obstacle)
		return (0);
	m->matrix = m->content + i + 1;
	return (ft_check_line(m));
}
