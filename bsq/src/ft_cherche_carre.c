/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cherche_carre.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/05 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_bsq.h"

void	ft_compute(t_map *m, t_carre *s, int *t, t_point p)
{
	int	tmp;
	int	u;

	u = 0;
	p.y = 0;
	while (++p.y <= m->size.x)
	{
		p.x = 0;
		while (++p.x <= m->size.x)
		{
			tmp = t[p.x];
			if (m->matrix[p.x - 1 + (p.y - 1) * (1 + m->size.x)] == m->vide)
			{
				t[p.x] = MIN(MIN(u, t[p.x - 1]), t[p.x]) + 1;
				if(s->size < t[p.x])
				{
					s->coords = p;
					s->size = t[p.x];
				}
			}
			else
				t[p.x] = 0;
			u = tmp;
		}
	}	
}

void	ft_cherche_carre(t_map *m, t_carre *s)
{
	t_point	p;
	int		tab[m->size.x + 1];

	s->size = 0;
	p.x = 0;
	while (p.x <= m->size.x)
		tab[p.x++] = 0;
	ft_compute(m, s, tab, p);
	p.y = s->coords.y;
	s->coords.y -= s->size;
	s->coords.x -= s->size;
	while (p.y > s->coords.y)
	{
		p.y--;
		p.x = s->coords.x + s->size;
		while (p.x > s->coords.x)
		{
			p.x--;
			m->matrix[p.x + p.y * (1 + m->size.x)] = m->plein;
		}
	}
}