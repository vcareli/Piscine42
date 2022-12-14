/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/12/12 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE		true
# define FALSE		false
# define EVEN(nbr)	((nbr % 2 == 0) ? 1 : 0)
# define EVEN_MSG 	"EVEN"
# define ODD_MSG 	"ODD"
# define SUCCESS	0

typedef enum t_bool
{
	false = 0,
	true = 1,
}	t_bool;

#endif