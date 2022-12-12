/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/05 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	FT_BSQ_H
# define	FT_BSQ_H

//# define	MAX_L 		12000
# define	BUFFER		5800000
# define	MIN(A, B)	((A < B) ? A : B)

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_map
{
	char	*content;
	char	*matrix;
	char	vide;
	char	plein;
	char	obstacle;
	t_point	size;
}	t_map;

typedef struct s_carre
{
	t_point	coords;
	int		size;
}	t_carre;

int				ft_is_valid(t_map *m);
void			ft_cherche_carre(t_map *m, t_carre *s);
char			*ft_fileread(int fd);
char			*ft_bufccopy(char *dest, char *src, int n);
char			*ft_file_load(char *path);

#endif